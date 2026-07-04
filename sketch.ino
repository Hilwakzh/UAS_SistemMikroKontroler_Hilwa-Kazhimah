#include <WiFi.h>
#include "ThingSpeak.h"

const char* WIFI_NAME = "Wokwi-GUEST";
const char* WIFI_PASSWORD = "";

WiFiClient client;

// Ganti dengan data ThingSpeak milik Anda
unsigned long CHANNEL_ID = 3421495;
const char *WRITE_API_KEY = "ZTQ6HN5ZLRYM40J9";

const int sensorPin = 34;
const int ledPin = 2;
const int buzzerPin = 4;

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  WiFi.begin(WIFI_NAME, WIFI_PASSWORD);

  Serial.print("Menghubungkan ke WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Terhubung!");

  ThingSpeak.begin(client);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  Serial.print("Nilai Sensor: ");
  Serial.println(sensorValue);

  if (sensorValue > 2000) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    ThingSpeak.setField(2, 1); // Status Bocor
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    ThingSpeak.setField(2, 0); // Status Aman
  }

  ThingSpeak.setField(1, sensorValue);

  int status = ThingSpeak.writeFields(CHANNEL_ID, WRITE_API_KEY);

  if (status == 200) {
    Serial.println("Data berhasil dikirim ke ThingSpeak.");
  } else {
    Serial.print("Gagal mengirim data. Kode error: ");
    Serial.println(status);
  }

  delay(15000); // Interval minimum ThingSpeak
}