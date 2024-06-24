#include "DHT.h"

// Definiciones del sensor
#define DHTPIN 2      // Pin digital conectado al sensor DHT
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();
  
  // Comprobar si alguna lectura falló
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer del sensor DHT!");
  } else {
    Serial.print("Humedad: ");
    Serial.print(humedad);
    Serial.print(" %\t");
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" *C");
  }

  delay(2000); // Esperar 2 segundos entre lecturas
}
