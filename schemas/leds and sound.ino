// Definición del pin del LED
const int ledPinRojo = 13;
const int ledPinAmarillo = 12;
const int ledPinVerde = 11;

const int espera = 500;


void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(8, OUTPUT);
}

void loop() {

  blinkPin(13, espera);
  blinkPin(12, espera/3);
  blinkPin(11, espera);
  makesound();
  makesound();
  makesound();

}

void blinkPin(int pin, int delayTime) {
  digitalWrite(pin, HIGH); // Encender el pin
  delay(delayTime); // Esperar el tiempo especificado
  digitalWrite(pin, LOW); // Apagar el pin
  // delay(delayTime); // Esperar el tiempo especificado
}

void makesound(){
  // Generar un tono en el buzzer
  tone(8, 8); // Frecuencia de 1000 Hz
  delay(200); // Mantener el tono durante 1 segundo
  noTone(8); // Apagar el tono
  delay(8); // Esperar 1 segundo antes de volver a empezar
}


