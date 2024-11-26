#include <Arduino.h>
#include "DHT.h"

#define DHT_PIN 22
#define DHTTYPE DHT22

DHT dht(DHT_PIN, DHTTYPE);

void setup() {
Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
    float h = dht.readHumidity();
    float t = dht.readTemperature(true); //fahrenheit

    Serial.print("Humidity: "); Serial.print(h); Serial.println("% rH");
    Serial.print("Temperature: "); Serial.print(t); Serial.println(" degrees F");

    delay(5000);
}
