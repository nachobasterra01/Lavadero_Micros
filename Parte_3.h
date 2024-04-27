#include "General.h"

#ifndef PARTE_3_H_
#define PARTE_3_H_

// Cinta de arrastre
void setupCinta(void);
void moveCinta(void); 
void stopCinta(void);

// LEDs (Estado maqueta y Semaforo)
void setup_leds(void);
void semaforo(); //LED_4_5
void encendido_L1(void);
void apagado_L1(void);
void LED_1(void); // Pendiente (Consulta periódica)

// Parada de emergencia
void setup_ParadaEmergencia(void);
void ParadaEmergencia(void); //Pendiente (Por interrupción)

// Inicialización
void setup_Parte3(void);

#endif /* PARTE_3_H_ */

