#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Nwow51xMAz-dStfa_tb1NAPTLqJpDrga";
char ssid[] = "TECH_AE26";
char pass[] = "126132562";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
