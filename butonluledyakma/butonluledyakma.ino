#define buton 8
#define led 10

int buton_durumu = 0;

void setup() {
 
    pinMode(buton,INPUT);
    pinMode(led,OUTPUT);
    

}

void loop() {
  
    buton_durumu = digitalRead(buton);

    if(buton_durumu == 1 )
    {
      digitalWrite(led,HIGH);
      delay(50);
      digitalWrite(led,LOW);
      delay(50);

    }
    else
    {
      digitalWrite(led,LOW);
    }
    

}
