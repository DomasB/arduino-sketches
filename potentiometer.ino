#include <Wire.h>
#include "Wire.h"
#define PCF8591 (0x90 >> 1)
#define ADC0 0x00
#define DAC 0x40
byte value0;
void setup()
{
 Wire.begin();
 Serial.begin(9600);
  Wire.pins(0, 2); // SDA, SCL  
  Wire.begin(0, 2);
}
void loop()
{
 for (int d=100; d>=10; --d)
 {
   for (int i=255; i>=0; --i)
   {
     Wire.beginTransmission(PCF8591);
     Wire.write(DAC);
     Wire.write(i);
     Wire.endTransmission();
     delay(d);
     Wire.beginTransmission(PCF8591);
     Wire.write(ADC0);
     Wire.endTransmission();
     Wire.requestFrom(PCF8591, 2);
     value0=Wire.read();
     value0=Wire.read();
     Serial.print(value0); Serial.print(" ");
     Serial.print(i);
     Serial.println();
   }
      for (int i=0; i<=255; ++i)
   {
     Wire.beginTransmission(PCF8591); 
     Wire.write(DAC); 
     Wire.write(i); 
     Wire.endTransmission();
     delay(d);
     Wire.beginTransmission(PCF8591);
     Wire.write(ADC0); 
     Wire.endTransmission();
     Wire.requestFrom(PCF8591, 2);
     value0=Wire.read();
     value0=Wire.read();
     Serial.print(value0); Serial.print(" ");
     Serial.print(i);
     Serial.println();
   }
  }
}
