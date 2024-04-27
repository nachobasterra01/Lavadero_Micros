#include "General.h"

// Variables globales
volatile uint32_t s = 0; // Cuenta segundos
volatile uint32_t ms = 0; // Cuenta milisegundos
volatile uint8_t numCar = 0; // Cuenta coches dentro del lavadero

volatile uint8_t EnableEntrance = 1; // '1' permite nuevas entradas de vehículos y '0' no permite

/* Puede ser interesante
volatile uint8_t estLavV = 0; // '1' activado Lavadero Vertical y '0' desactivado
volatile uint8_t estLavH = 0; // '1' activado Lavadero Vertical y '0' desactivado
volatile uint8_t estSec  = 0; // '1' activado Secadero y '0' desctivado
*/

//////////////////////////////
// Funciones manejo registros


//////////////////////////////

// Funciones temporales 
void setupTimers(void){
	cli();
	// TIMER 1 => Timer segundos : Modo CTC (ICRn) con preescalado 256
	TCCR1A = 0b00000000;
	TCCR1B = 0b00001101;
	TIMSK1 = 0b00000010;
	OCR1A =  uCFreq/256;
	// TIMER 3 => Timer milisegundos :  Modo CTC (ICRn) sin preescalado
	TCCR3A = 0b00000000;
	TCCR3B = 0b00001001;
	TIMSK3 = 0b00000010;
	OCR3A =	uCFreq/1000;
	sei();
}

void delay_milliseconds(uint32_t dms){
	volatile uint32_t delay = ms + dms;
	while( ms < delay ){}
}
void delay_seconds(uint32_t ds){
	volatile uint32_t delay = s + ds;
	while( s < delay ){}
}

uint32_t millis(void){
	return ms;
}

uint32_t seconds(void){
	return s;
}

////////////////////////////

// Funciones globales

void setup_General(void){ //Incluir todas funciones inicialización
	setupTimers();
}

uint8_t getNumCar(void){ // Devuelve número coches en lavadero
	return NumCar;
}

void incNumCar(void){ // Incrementa en uno el contador de coches en lavadero
	NumCar++;
}

void decNumCar(void){ // Decrementa en uno el contador de coches en lavadero
	NumCar--;
}

////////////////////////////

// Funciones de interrupción

ISR(TIMER1_COMPA_vect){ // Segundos
	s++;
	// CONTINUARÁ
}

ISR(TIMER3_COMPA_vect){ // Milisegundos
	ms++;
	// CONTINUARÁ
}
