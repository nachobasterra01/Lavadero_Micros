# Lavadero_Micros
Trabajo Sistemas Microprocesadores 2023/2024 - EQUIPO LAVADERO 2
# Puertos a usar (J1)
	// MOTORES
		M1_di	=>	PK0 // (PCINT)
		M1_en	=>	PK2 // (PCINT)
		M2_di	=>	PK4 // (PCINT)
		M2_en	=>	PK6 // (PCINT)
		M3_di	=>	PB1 // (PCINT)
		M3_en	=>	PB3 // (PCINT)
		M4_di	=>	PK5 // (PCINT)
		M4_en	=>	PK7 // (PCINT)
		M5_di	=>	PK1 // (PCINT)
		M5_en	=>	PK3 // (PCINT)
		M6_di	=>	PB5 // (PCINT)
		M6_en	=>	PB7 // (PCINT)
	// SWITCHES
		SW1	=>	PD3 	// (INT)
		SW2	=>	PD1 	// (INT)
		SW3	=>	PD2 	// (INT)
		SW4	=>	PD0 	// (INT)
	// LED
		L1 	=>	PL1 // (ICP5)
		L2 	=>	PL3 // (OC5A)	
		L3 	=>	PL5 // (OC5C)
		L4 	=>	PL7 // (-)
	// SENSORES	
		SO1 	=>	PB0 // (PCINT)
		SO2 	=>	PL2 // (-)
		SO3 	=>	PL4 // (OC5B)
		SO4 	=>	PL6 // (-)
		SO5 	=>	PB6 // (PCINT/OC0A/OC1C)
		SO6 	=>	PB4 // (PCINT/OC1B)
		SO7 	=>	PD4 // (-)
		SO8 	=>	PD6 // (-)
		SO9 	=>	PD7 // (-)
		SO10 	=>	PL0 // (ICP4)
		SO11 	=>	PD5 // (-)
		SO12 	=>	PB2 // (PCINT/OC2A)
  
# Partición de la maqueta : Lavadero
Parte 1: Control de los rodillos de lavado y secado para seguir los perfiles de los vehículos.

Parte 2: Control de la barrera de entrada, rodillo de lavado vertical y de la luz de indicación de estado (luz periódica con destellos cada 30s o intermitente cada segundo).

Parte 3: Control de la cinta de arrastre, semáforo, parada de emergencia e integración del sistema (apertura de la barrera en las condiciones adecuadas, gestión de luces, parada de seguridad, parada de emergencia…
