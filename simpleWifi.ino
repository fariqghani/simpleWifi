#include <ESP8266WiFi.h>       


// Replace with your network credentials
#define WIFI_SSID "your WiFi ssid"                                          // input your home or public wifi name 
#define WIFI_PASSWORD "your WiFi password"   

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println();
  Serial.println("Starting...");

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                      //try to connect with wifi
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP()); 

}
void loop() {
}
