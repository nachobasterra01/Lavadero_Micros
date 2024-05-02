#include "Parte_1.h"

// VARIABLES


// FUNCIONES

	// FUNCIONES LAVADERO HORIZONTAL

void setup_LavHorizontal(){
	// Motor 3: Altura rodillo H
	setBit(REG_M3_en_DDR,PIN_M3_en_DDR); // Definir como salida
	setBit(REG_M3_di_DDR,PIN_M3_di_DDR);
	setBit(REG_M3_en_PORT,PIN_M3_en_PORT); // Subir rodillo
	setBit(REG_M3_di_PORT,PIN_M3_di_PORT);
	// Motor 4: Giro rodillo H
	setBit(REG_M4_en_DDR,PIN_M4_en_DDR); // Definir como salida
	setBit(REG_M4_di_DDR,PIN_M4_di_DDR);
	clearBit(REG_M4_en_PORT,PIN_M4_en_PORT); // Apagado de inicio
	setBit(REG_M4_di_PORT,PIN_M4_di_PORT); // Sentido giro -- COMPROBAR EN MAQUETA
}

	// Lavadero Horizontal - Altura
	
void up_LavHorizontal(){
	setBit(REG_M3_en_PORT,PIN_M3_en_PORT);
	setBit(REG_M3_di_PORT,PIN_M3_di_PORT); // COMPROBAR EN MAQUETA si es setBit() o clearBit()
}

void down_LavHorizontal(){
	setBit(REG_M3_en_PORT,PIN_M3_en_PORT);
	clearBit(REG_M3_di_PORT,PIN_M3_di_PORT); // COMPROBAR EN MAQUETA si es ~[setBit() o clearBit()]
}

void stop_AlturaH(){
	clearBit(REG_M3_en_PORT,PIN_M3_en_PORT);
}

	// Lavadero Horizontal - Giro
	
void on_LavHorizontal(){
	setBit(REG_M4_en_PORT,PIN_M4_en_PORT);
}

void off_LavHorizontal(){
	clearBit(REG_M4_en_PORT,PIN_M4_en_PORT);
}

void lavaderoHorizontal(){
	// Si detecta final de carrera al subir o bajar rodillo => paro y cambio sentido motor
	if (limit_switch_lavH = 1 && isBitSet(REG_M3_en_PORT,PIN_M3_en_PORT)){
		stop_AlturaH();
		toggleBit(REG_M3_di_PORT,PIN_M3_di_PORT);
	}

	if(aux_lavH){
		// Incluyo manejo: upLavHorizontal(); downLavHorizontal(); stopLavHorizontal(); 
		/* Ejemplo
			if(lav_H[0]=0 && lav_H[1]=0){
				stopLavHorizontal();
			}
			else if(lav_H[0]=0 && lav_H[1]=1){
				upLavHorizontal();
			}
		*/
	}
	
}

	// FUNCIONES SECADO
	
void setup_secado(){
	setBit(REG_M5_en_DDR,PIN_M5_en_DDR); // Definir como salida
	setBit(REG_M5_di_DDR,PIN_M5_di_DDR);
	setBit(REG_M5_en_PORT,PIN_M5_en_PORT); // Subir
	setBit(REG_M5_di_PORT,PIN_M5_di_PORT);
}

void up_secado(){
	setBit(REG_M5_en_PORT,PIN_M5_en_PORT);
	setBit(REG_M5_di_PORT,PIN_M5_di_PORT); // COMPROBAR EN MAQUETA si es setBit() o clearBit()
}

void down_secado(){
	setBit(REG_M5_en_PORT,PIN_M5_en_PORT);
	clearBit(REG_M5_di_PORT,PIN_M5_di_PORT); // COMPROBAR EN MAQUETA si es ~[setBit() o clearBit()]
}

void stop_secado(){
	clearBit(REG_M5_en_PORT,PIN_M5_en_PORT);
}

void secado(){
	if (limit_switch_secado = 1 && isBitSet(REG_M5_en_PORT,PIN_M5_en_PORT)){
		stop_secado();
		toggleBit(REG_M5_di_PORT,PIN_M5_di_PORT);
	}
	
	if(aux_secado){
		// EQUIVALENTE A LAVADO_H
	}
}

void setup_Parte1(){
	cli();
	setup_LavHorizontal();
	setup_secado();
	sei();
}

void Parte_1(){
	lavaderoHorizontal();
	secado();
}
