
#include "MQ135.h"
#include <WiFi.h>
#include <PubSubClient.h>


#define sensor         32                        //pin for analog input
#define buzzer  12  //pin for buzzer


 
const char* ssid = "Network_SSID";
const char* password =  "Network_Password";
const char* mqttServer = "IP_Address";
const int mqttPort = 1883;
const char* mqttUser = "MQQT_Username";
const char* mqttPassword = "MQQT_Password";

 
WiFiClient espClient;
PubSubClient client(espClient);
void setup() {

 pinMode(sensor,INPUT);                     //MQ135 analog feed set for input
  //pinMode(digTrigger,INPUT);                  //MQ135 digital feed set for input
  pinMode(buzzer,OUTPUT);                        //led set for output

       
  
  Serial.begin(115200);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
 
  client.setServer(mqttServer, mqttPort);
 
  while (!client.connected()) {
    Serial.println("Connecting to MQTT...");
 
    if (client.connect("ESP32Client", mqttUser, mqttPassword )) {
 
      Serial.println("connected");
 
    } else {
 
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
 
    }
  }
  
}
 
void loop() {
  client.loop();
  MQ135 gasSensor = MQ135(sensor);
    int air_quality = gasSensor.getPPM();
    Serial.print("Air Quality: ");  
    Serial.print(air_quality);
    Serial.println("  PPM");   
    Serial.println();
    char mqtt_payload[30] = "";
  snprintf (mqtt_payload,30, "%1d",  air_quality);
  client.publish("esp/test", mqtt_payload);
  if (air_quality>1000){
     digitalWrite(buzzer,LOW);
   }
  else {
     digitalWrite(buzzer,HIGH);
    }
    Serial.println("Waiting...");

    delay(2000);    
    
  
}




  
