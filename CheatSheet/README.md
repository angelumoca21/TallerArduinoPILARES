# Cheat Sheet Arduino

## Pinout Arduino Nano
![pinoutNano](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/pinoutNANO.png)

## Pinout Arduino UNO
![pinoutUNO](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/pinoutUNO.png)

## Tipos de señales:

- ### Digitales:valores finitos
![senalDigital](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/digital.png)

- ### Analógicas:infinitos valores.
![senalAnalogica](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/analogica.png)

## Estructura básica del código de Arduino

El código de arduino se realizan en 2 estructuras principales: **void setup** y **void loop**
![codigoArduino](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/codigoArduino.png)

- ### void setup:
Se ejecuta 1 sola vez, en este bloque se configuran los pines como entrada (INPUT) o salida (OUTPUT). 

El arduino tiene multiples PINES con los cuales se realizan las conexiones con sensores (dispositivos que miden alguna variable fisica de nuestro alrededor) y actuadores (dispositivos que realizan alguna acción, ejemplo: LED, motor, buzzer, relevador, etc.) 
Estos pines se deben de configurar como salidas (ACTUADORES) o entradas (SENSORES).

`pinMode(NúmeroPin,INPUT u OUTPUT);`

![entradasSalidas](https://github.com/angelumoca21/TallerArduinoPILARES/blob/main/img/ArduinoInputOutput.jpg)

- ### void loop:
Se ejecuta inifinitamente mientras el Arduino tenga energía, aquí se realiza el código principal que se quiere ejecutar.

Para salidas digitales se usa:
`digitalWrite(NúmeroPin,1 o 0);` para generar un CERO o un UNO en la salida especificada.

Para entradas digitales se usa:
`nombreVariable = digitalRead(NúmeroPin);` para leer si hay un UNO o CERO en la entrada especificada.

Para salidas analógicas (pines marcados con el signo **~**) se usa:
`analogWrite(NúmeroPinConVirgulilla,0-255);` recordar que en las señales analógicas hay infinitos valores por lo que se debe de especificar un número entre 0 y 255.

Para entradas analógicas se usa:
`nombreVariable = analogRead(NúmeroPinAnalógico);` para leer el valor analógico de la entrada especificada, recordar que los valores analógicos de entrada van de 0 a 1023.