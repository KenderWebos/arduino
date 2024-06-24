#define BUZZER_PIN 3
#define BUTTON_PIN 4

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Utilizar resistencia de pull-up interna
  Serial.begin(9600);
}

void loop() {
  int estadoBoton = digitalRead(BUTTON_PIN);
  
  if (estadoBoton == LOW) { // El botón está presionado
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("¡Alarma activada!");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    Serial.println("Alarma desactivada");
  }
}
