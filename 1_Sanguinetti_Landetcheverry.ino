/* Integrantes
    Nombre: Maximo
    Apellido: Sanguinetti
    Curso: 3A
    
    Nombre: Nicole
    Apellido: Landetcheverry
    Curso: 3A
    
1. El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.
 Pines:
        Boton: 12
        LED1: 6
        LED2: 9
        LED3: 10
        LED4: 11
      Valor:
        R_boton: 47000ohms
        R_LEDs: 330ohms
*/
void setup() {
  //Declarar pines
  pinMode(12, INPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(1000);
}

void loop() {
  //Detecta si el boton esta prendido
  if (digitalRead(12)== 1){
      //Prender leds
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
  } else {
      //Si no esta presionado apago las leds
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
  }
}