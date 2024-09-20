/* Integrantes
    Nombre: Maximo
    Apellido: Sanguinetti
    Curso: 3A
    
    Nombre: Nicole
    Apellido: Landetcheverry
    Curso: 3A

2. En el siguiente programa se deberá prender de a UN LED POR VEZ.
        Por cada pulsación se deberá apagar el LED prendido y prender el LED más próximo de la derecha.
        En caso de no haber, se deberá volver a empezar la vuelta, empezando desde el LED de la izquierda
 Pines:
        Boton: 12
        LED1: 6
        LED2: 9
        LED3: 10
        LED4: 11
      Valor:
        R_boton: 47000 ohms
        R_LEDs: 330ohms
*/

//Contador lo utilizo para cambiar entre leds
byte Contador = 0;

//Sumar lo uso para hacer que cuando aumente o resetee el contador lo haga una sola vez
bool Sumar = false;

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
  //Detecta si el boton esta prendido y si el contador es 0
  if (digitalRead(12)== 1 && Contador == 0){
      //Prende led 1, apaga la led 4
      digitalWrite(6, HIGH);
      digitalWrite(11, LOW);
      //Vuelve sumar a falso para permitir que el contador aumente
      Sumar = false;
      delay(500);
  } 

  //Cuando el boton no esta presionado, la led 1 esta prendida y Sumar es falso se suma 1 al contador
  if (digitalRead(12) == 0 && digitalRead (6) == HIGH && Sumar == false){
    Contador++;
    //Vuelve sumar a verdadero para evitar que el contador aumente
    Sumar = true;
  }

  //Detecta si el boton esta prendido y si el contador es 1
  if (digitalRead(12) == 1 && Contador == 1){
    //Prende led 2, apaga la led 1
    digitalWrite(9, HIGH);
    digitalWrite(6, LOW);
    //Vuelve sumar a falso para permitir que el contador aumente
    Sumar = false;
    delay(500);
  }

  //Cuando el boton no esta presionado, la led 2 esta prendida y Sumar es falso se suma 1 al contador
    if (digitalRead(12) == 0 && digitalRead (9) == HIGH && Sumar == false){
    Contador++;
    //Vuelve sumar a verdadero para evitar que el contador aumente
    Sumar = true;
  }

  //Detecta si el boton esta prendido y si el contador es 2
  if (digitalRead(12) == 1 && Contador == 2){
    //Prende led 3, apaga la led 2
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    //Vuelve sumar a falso para permitir que el contador aumente
    Sumar = false;
    delay(500);
  }


  //Cuando el boton no esta presionado, la led 3 esta prendida y Sumar es falso se suma 1 al contador
    if (digitalRead(12) == 0 && digitalRead (10) == HIGH && Sumar == false){
    Contador++;
    //Vuelve sumar a verdadero para evitar que el contador aumente
    Sumar = true;
  }

  //Detecta si el boton esta prendido y si el contador es 3
  if (digitalRead(12) == 1 && Contador == 3){
    //Prende led 4, apaga la led 3
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    //Vuelve sumar a falso para permitir que el contador aumente
    Sumar = false;
    delay(500);
  }

  //Cuando el boton no esta presionado, la led 4 esta prendida y Sumar es falso se resetea el contador
    if (digitalRead(12) == 0 && digitalRead (11) == HIGH && Sumar == false){
    Contador = 0;
    //Vuelve sumar a verdadero para evitar que el contador se resetee indefinidamente
    Sumar = true;
  }
}