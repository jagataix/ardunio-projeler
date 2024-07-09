

int ledler[] = {2,3,4,5,6,7};



void setup() {
  
     for(int i=0;i<6;i++)
     {
        pinMode(ledler[i],OUTPUT);
     }


}



void loop() {
 
    for(int i=5;i>=0;i--)
    {
       if(i==1 || i==3 || i==5)
       {
        digitalWrite(ledler[i], HIGH);
       delay(200);
       digitalWrite(ledler[i],LOW);
       }
       
       
    }
    for(int i=0;i<6;i++)
    {
       if(i==1 || i==3 || i==5)
       {
      digitalWrite(ledler[i],HIGH);
       delay(200);
       digitalWrite(ledler[i],LOW);
       }

       
       
    }


}
