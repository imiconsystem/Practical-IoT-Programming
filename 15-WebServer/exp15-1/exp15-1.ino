#include <WiFi.h>
#include <WebServer.h>
//const char* ssid = "Wi-Fi Name";
//const char* password = "Wi-Fi Password";
const char* ssid = "Leafmind_2.4GHz";
const char* password = "jlt5687013";
WebServer server(80); 
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   Serial.println("Try Connecting to ");
   Serial.println(ssid);
   WiFi.begin(ssid, password);
   while (WiFi.status() != WL_CONNECTED) 
   {
      delay(1000);
      Serial.print(".");
   }
   Serial.println("");
   Serial.println("WiFi connected successfully");
   Serial.print("Got IP: ");
   Serial.println(WiFi.localIP());  
   server.on("/", handle_root);
   server.begin();
   Serial.println("Web Server Started");
   delay(100);
}

void loop() 
{
   server.handleClient();
}

// HTML Contents 
String HTML = "<!DOCTYPE html>\
<html>\
<body>\
   <h1>ESP32 Web Server Station Mode</h1>\
</body>\
</html>";

// Handle root url (/)
void handle_root() 
{
   server.send(200, "text/html", HTML);
} 
