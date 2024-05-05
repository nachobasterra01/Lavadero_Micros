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


void control_L1 (uint8_t modo){ // Se usará en la integración
	if (regModoL1 != modo){ //Solo actualizo cuando cambia el modo
		switch(modo){
			case 0:
				if(s%10==0){
					while(ms%500!=0){
						PORTL= 0x02;
					}
					PORTL= 0x00;
					}
				}
				else
			break;
			default:
				if(ms%500==0){
					if(PORTB=0X01){
						PORTB= 0x00;
					} else{
						PORTB=0x01;
					}
				}
		}
	}
	regModoL1 = modo;
}
void setup_barrera(){
	DDRK= 0X00;
	PORTK=0X00;
	
	DDRB &= ~(1<< DDB0); //PCINT0 como entrada
	cli();
	PCICR |= (1<<PCIB0);	// Habilito grupo de interrupciones en PORTB (por cambio de estado)
	PCMSK0 |= (1<<PCINT0);  //Habilito interrupción en pin PCINT0
	sei();			//Habilito interrupciones globales
	
	  
}

void barrera(){
	if(PINL2==1){
		PORTK = 0x04; %no se como asignar solo un bit
	}
}

ISR(PCINT0_vect){
	if(PINB0 != 1){ 
	barrera();
	}
	else {
	PORTK = 0x00; //deshabilitar barrera
	}
}

int contador_ms;
int main(void)
{
	setup_barrera();
	setup_luz();
	/* Replace with your application code */
	while (1)
	{
		if(SO1==1){
			if(contador_ms==10){
				encendido==1;%si el sensor detecta se pone bandera a 1, bandera vale 0 al principio y cunado apaguemos.
				contador_ms==0; 
			} 
        	}
		contador_ms++; %para controlar cuanto tiempo despues entra el siguiente coche
        	control_L1(); 
	}
}



//barrera
//si SO2==1, BARRERA CERRADA
    si SO1 detecta un coche, EN=1¿CONTANDO PULSOS?

//lavado vertical
