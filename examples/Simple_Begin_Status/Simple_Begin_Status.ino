// Arduino Sample Code to use ADS129X library
// Written by Axel Sepulveda, May 2020

#include <ADS129X.h>
#include <SPI.h>

// ESP8266, arbitrary DRDY in D0, CS is hardware CS (could be arbitrary)
const int ADS_DRDY = D0;
const int ADS_CS =   D8;

// Construct and init ADS129X object
ADS129X adc(ADS_DRDY, ADS_CS); 

uint8_t adcID;

void setup()
{
  Serial.begin(115200);
  Serial.println("");
  Serial.println("Starting ADC");
  
  adc.SDATAC(); // device wakes up in RDATAC mode, so send stop signal
  
  adcID= adc.getDeviceId();
  Serial.print("ADC Started: ");
  delay(1000);
  
  Serial.println(adcID,BIN);   // print in binary format
}

void loop()
{ 

}
