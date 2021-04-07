// Arduino Sample Code to use ADS129X library
// Written by Axel Sepulveda, May 2020

#include <ADS129X.h>
#include <SPI.h>

const int ADS_DRDY =  5;
const int ADS_CS =   10;

// Construct and init ADS129X object
ADS129X adc(ADS_DRDY, ADS_CS); 

uint8_t adcID;

void setup()
{
  Serial.begin(250000);
  
  Serial.println("Starting ADC");
  
  adc.begin(); 
  adcID= adc.getDeviceId();
  Serial.print("ADC Started: ");
  delay(1000);
  
  Serial.println(adcID,BIN);   // print in binary format
}

void loop()
{ 

}
