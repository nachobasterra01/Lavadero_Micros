#include "Parte_2.h"

// VARIABLES

// FUNCIONES (Inicialización, Uso...)
void setup_luz(){
	PORTB=0X01;
	cli();												//deshabilito las interrupciones globales
	TCCR1A= 0x00;										//configurar CTC
	TCCR1B= (1 << WGM12) | (1 << CS11) | (1 << CS10);	//Preescalador de 64
	OCR1A=62500-1;										//configuro el numero de ciclos a contar
	TIMSK1= (1 << OCIE0A);								//habilito la mascara de la interrupcion
	TIFR1= (1 << OCF1A);								//habilito la bandera de la interrupcion
	sei();												//hbailito las interrupciones globales
}



//interrupcion periodica para la luz
ISR( TIMER1_COMPA_vect ){	//interrupcion periodica cada 0.1s
	if(bandera==1){
        if(PORTB=0X01){
		    PORTB=0x00; 
	    } else 
	        PORTB=0X01; 
     }
}

int dummy;
int main(void)
{

	setup_luz();
	/* Replace with your application code */
	while (1)
	{
        if(SO1==1){
            bandera==1; 
        }
        
		dummy++;
	}
}



//barrera
//si SO2==1, BARRERA CERRADA
    si SO1 detecta un coche, EN=1¿CONTANDO PULSOS?

//lavado vertical
