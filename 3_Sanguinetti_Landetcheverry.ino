/* Integrantes
    Nombre: Maximo
    Apellido: Sanguinetti
    Curso: 3A
    
    Nombre: Nicole
    Apellido: Landetcheverry
    Curso: 3A

3. A continnuación se desea fabricar un contador binario de 4 bits.
        El programa deberá contar de 0 a 15 mostrando la cuenta actual a través de los 4 LEDs.
        Se interpreta 0 si el LED está apagado y 1 si el LED está prendido. 
        La cuenta aumenta cada vez que el pulsador es presionado, al llegar a 15 deberá volver a empezar en 0.
        IMPORTANTE: la cuenta debe aumentar UNA SOLA VEZ por cada pulsación.
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
  if (digitalRead(12)== 1 && Contador == 0){
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      Sumar = false;
      delay(500);
  } 

 
  if (digitalRead(12) == 0 && digitalRead (6) == HIGH && Sumar == false){
    Contador++;
    Sumar = true;
  }

  if (digitalRead(12) == 1 && Contador == 1){
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }




  if (digitalRead(12) == 1 && Contador == 2){
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

    if (digitalRead(12) == 0 && Sumar == false){
    Contador++;
    Sumar = true;
  }


  if (digitalRead(12) == 1 && Contador == 3){
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

   if (digitalRead(12) == 1 && Contador == 4){
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 0 && Sumar == false){
    Contador++;
    Sumar = true;
  }

  if (digitalRead(12) == 1 && Contador == 5){
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

 if (digitalRead(12) == 1 && Contador == 6){
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 7){
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 8){
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 9){
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 10){
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 11){
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 12){
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 13){
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 14){
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

  if (digitalRead(12) == 1 && Contador == 15){
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    Sumar = false;
    delay(500);
  }

    if (digitalRead(12) == 0 && Contador == 15 && Sumar == false){
    Contador = 0;
    Sumar = true;
  }
}


  
