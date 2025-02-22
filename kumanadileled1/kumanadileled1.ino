#include <IRremote.h>

int RECV_PIN = 2;

IRrecv irrecv(RECV_PIN);

decode_results sonuc;

#define BUTON0 0xFF6897
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7
#define BUTON6 0xFF5AA5
#define BUTON7 0xFF42BD
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
void setup() {
  
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);

   Serial.begin(9600);

   irrecv.enableIRIn();


}



void loop() {

  if(irrecv.decode(&sonuc))
  {
    if(sonuc.value == BUTON1)
    {
      digitalWrite(led1,!digitalRead(led1));

      if(digitalRead(led1) == HIGH)
         Serial.println("LED 1 Yandi");
      else
         Serial.println("LED 1 Sondu");
    }

    if(sonuc.value == BUTON2)
    {
      digitalWrite(led2,!digitalRead(led2));

      if(digitalRead(led2) == HIGH)
         Serial.println("LED 2 Yandi");
      else
         Serial.println("LED 2 Sondu");
    }

    if(sonuc.value == BUTON3)
    {
      digitalWrite(led3,!digitalRead(led3));

      if(digitalRead(led3) == HIGH)
         Serial.println("LED 3 Yandi");
      else
         Serial.println("LED 3 Sondu");
    }

    if(sonuc.value == BUTON4)
    {
      digitalWrite(led4,!digitalRead(led4));

      if(digitalRead(led4) == HIGH)
         Serial.println("LED 4 Yandi");
      else
         Serial.println("LED 4 Sondu");
    }

    if(sonuc.value == BUTON0)
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW); 
      Serial.println("Butun Ledler Sondu");
    }

    if(sonuc.value == BUTON8)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH); 
      Serial.println("Butun Ledler Yandi");
    }
    irrecv.resume();
  }
  
}
