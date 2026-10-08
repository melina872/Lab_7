#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <WiFi.h>

Adafruit_BMP280 bmp;
float temperature;

//Wi-Fi constants
const char* ssid = "BMP280_Wifi";
const char* password = "Password";

void setup(){
  Serial.begin(115200);
  Serial.println("Program Started");	
  
  // BMP280 code
  //Initialization 
  Wire.begin();
 
  if(bmp.begin(0x76)){
    Serial.println("BMP280 Found");
  }
  else{
    Serial.println("BMP280 Not Found");
  }

	// LED code
	// Wi-Fi code
  WiFi.softAP( ssid, password );
  Serial.print("IP Address: ");
  
  Serial.println(WiFi.softAPIP());

	// Routes
	// Server start
}
void loop(){
  //Temperature Data recording
  temperature = bmp.readTemperature();
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  
  delay(1000);
}
