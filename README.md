# Lavadero_Micros
Trabajo Sistemas Microprocesadores 2023/2024 - EQUIPO LAVADERO 2


# Conexión diseños de referencias
1- Conectar la maqueta al conector J1 de la placa Molase del micro con un cable plano, directamente, SIN PASAR POR LA PLACA DE CONEXIONADO de cada grupo

2- Conectar la placa Molase de LCD al conector J2 de la placa del micro

3- Cenectar el programador AVR-Dragon al micro, al igual que en las prácticas

4- Programar el micro con el diseño de referencia (Atraccion.hex, Lavadero.hex o Bolera.hex). Para ello, en Microchip Studio (no hace falta tener un proyecto abierto, pero tampoco pasa nada si se tiene abierto):

4.1 Abrir la herramienta de programación (Tools->Device Programming, o Ctrl-Shift-P)

4.2 Seleccionar la herramienta de programación (AVR Dragon) y la interfaz (JTAG)

4.3 Leer el código de identificacioón del micro (boton de Read bajo "Device Signature") Debería decir que es un Atmega640

4.4 En la pestaña "Memories" seleccionar el .hex que se va a grabar en la Flash (Hay diseños para el Lavadero, la Bolera, y la Atraccion)

4.5 Dar a "Program" y... listo