#define sensor 3
#define motor 5

int durum = LOW;

void setup() {
  
   pinMode(sensor,INPUT);
   pinMode(motor,OUTPUT);

}


void loop() {

  if(digitalRead(sensor))
  {
       if(durum == LOW)
       {
          durum = HIGH; 
       }
       else
       {
           durum = LOW; 
       }

       digitalWrite(motor,durum);
  }
  delay(5);
  

}
