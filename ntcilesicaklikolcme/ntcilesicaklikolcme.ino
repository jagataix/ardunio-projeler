#include <math.h>
#define led 2

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

double olcme(int analog)
{
     double degerim;
     degerim = log(((1024000 / analog) - 10000));
     degerim = 1 / (0.001129148 +(0.000234125 + (0.0000000076741 * degerim * degerim)) * degerim);
     degerim = degerim - 273.15;
     
     return degerim;
}

void loop() {
  
   int deger = analogRead(A0);
   double sicaklik = olcme(deger);
   

   if (sicaklik > 25)
   {
    Serial.println("Dikkat aşırı ısı!");
    Serial.println(sicaklik);
    digitalWrite(led,HIGH);
   }
   else
   {
    Serial.println("Isı miktarı :");
    Serial.println(sicaklik);
    digitalWrite(led,LOW);
   }
   delay(50);
}
