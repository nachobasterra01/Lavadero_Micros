#include "Parte_2.h"

// VARIABLES

// FUNCIONES (Inicialización, Uso...)
void setup_luz(){
	DDRL=0X00; 
	PORTL=0X00; 
	cli();												//deshabilito las interrupciones globales
	TCCR5A= 0x00;										//configurar CTC
	TCCR5B= (1 << WGM52) | (1 << CS51) | (1 << CS50);	//Preescalador de 64
	OCR1A=62500-1;										//configuro el numero de ciclos a contar
	TIMSK5= (1 << OCIE0A);								//habilito la mascara de la interrupcion
	TIFR5= (1 << OCF5A);								//habilito la bandera de la interrupcion
	sei();												//hbailito las interrupciones globales
}


void luz(){
	if(s%30==0){
		if(encendido==1){
		        if(PORTB=0X01){
				PORTB=0x00; 
			} else 
				PORTB=0X01; 
		}
	}
}

//interrupcion periodica para la luz
// ISR( TIMER5_COMPA_vect ){	//interrupcion periodica cada 0.5s
// 	if(encendido==1){
// 		        if(PORTB=0X01){
// 				PORTB=0x00; 
// 			} else 
// 				PORTB=0X01; 
// 		}
// }

void setup_barrera(){
	DDRK= 0X00;
	PORTK=0X00;  
}

void barrera(){
	if(PINL2==1){
		PINK = (PINK2<<1); 
	}
}



int dummy;
int main(void)
{
	setup_barrera();
	setup_luz();
	/* Replace with your application code */
	while (1)
	{
        if(SO1==1){
            encendido==1; %si el sensor detecta se pone bandera a 1, bandera vale 0 al principio y cunado apaguemos. 
        }
        
		dummy++;
	}
}



//barrera
//si SO2==1, BARRERA CERRADA
    si SO1 detecta un coche, EN=1¿CONTANDO PULSOS?

//lavado vertical
