#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

#include <Servo.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
Servo servo;
char auth[] = "KvB_pNupQ98dMuvmVKi-AE7GG6CaTHLR";//Enter your Blynk auth token
char ssid[] = "vivo 1938";//Enter your WIFI name
char pass[] = "1234567890";//Enter your WIFI password
 
BLYNK_WRITE(V0){
  servo.write(param.asInt());
}
  
void setup() {
  Serial.begin(9600);
  servo.attach(D1);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
 
void loop() {
  Blynk.run();
}
