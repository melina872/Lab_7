#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp;

void setup()
{
  Serial.begin(115200);
  Serial.println("Program Started");	
  
  // BMP280 code
  Wire.begin();
 
  if(bmp.begin(0x76)){
    Serial.println("BMP280 Found");
  }
  else{
    Serial.println("BMP280 Not Found");
  }


	// LED code
	// Wi-Fi code
	// Routes
	// Server start
}
void loop(){
}
