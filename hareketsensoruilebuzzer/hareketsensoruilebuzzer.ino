void setup() {

   pinMode(7,INPUT);
   pinMode(6,OUTPUT);
   pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   int hareket = digitalRead(7);
   if (hareket == HIGH)
   {
       
       tone(6,400);
       digitalWrite(5,HIGH);
       delay(400);
       noTone(6);
       digitalWrite(5,LOW);
       delay(400);
   }
   else
   {
    noTone(6);
    digitalWrite(5,LOW);
    delay(100);
   }
}
