#include <WiFi.h>
#include <WebServer.h>
const char* ssid = "SmileMore"; 
const char* password = "12345678";  
// IP Address details
IPAddress local_ip(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
WebServer server(80);  
void setup() {
   Serial.begin(9600);
   delay(3000);
   WiFi.softAP(ssid, password);
   WiFi.softAPConfig(local_ip, gateway, subnet);
   Serial.print("Connect to Access Point : ");
   Serial.println(ssid);
   server.on("/", handle_root);
   server.begin();
   Serial.println("Web Server Started");
   delay(100);
}

void loop() {
  server.handleClient();
}

// HTML Contents
String HTML = "<!DOCTYPE html>\
<html>\
<body>\
   <h1>ESP32 Web Server Access Point Mode</h1>\
</body>\
</html>";

// Handle root url (/)
void handle_root() 
{
   server.send(200, "text/html", HTML);
} 
