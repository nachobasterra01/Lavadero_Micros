//	Librerias de trabajo
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stddef.h>

//	Construccion de libreria
#ifndef GENERAL_H_
#define GENERAL_H_

// Definicion de macros de trabajo 
	#define setBit(Registro,Bit) (Registro |= (1 << Bit))
  #define clearBit(Registro,Bit) (Registro &= ~(1 << Bit))
  #define toggleBit(Registro,Bit) (Registro ^= (1 << Bit))  

// Redefinicion de constantes 
	// Caracteristicas del microprocesador
    #define Freq_uC 8000000
  // Estado de maqueta 
		#define CYCLE_WORKING 1
		#define CYCLE_STOPPED 0
	// Timer seconds => TIMER 1: Mode CTC (ICRn) with preescalar 256 -- A definir

	// Timer miliseconds => TIMER 3: Mode CTC (ICRn) without preescalar -- A definir

	// Motores 
		
	// Switches

	// Leds

	// Sensores

#endif /* GENERAL_H_ */
