#include "General.h"

#ifndef PARTE_3_H_
#define PARTE_3_H_

// Cinta de arrastre
void setupCinta(void);	//setupBelt(void); 
void moveCinta(void);	//startBelt(void); 
void stopCinta(void);	//stopBelt(void);

// LEDs (Estado maqueta y Semaforo)
void setup_leds(void); //setup_L1
	// Semaforo [LED4 y LED5]
void semaforo(void); //LED_4_5
	// Estado maqueta [LED1]
void encendido_L1(void);
void apagado_L1(void);
void LED_1(void); // Pendiente (Consulta periódica)

// Parada de emergencia
void setup_ParadaEmergencia(void);
void ParadaEmergencia(void); //Pendiente (Por interrupción)

// Inicialización
void setup_Parte3(void);

#endif /* PARTE_3_H_ */
