#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_DEVICE_NAME "SmartLight"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "YourWiFi";
char pass[] = "YourPassword";

void setup() {
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(D2, OUTPUT);
}

void loop() {
  Blynk.run();
}
