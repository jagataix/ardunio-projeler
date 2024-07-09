#define echoPin 6
#define trigPin 7
#define buzzerPin 8
#define led 13

int maksimum = 50;
int minimum = 0;


void setup() {
    
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    pinMode(buzzerPin,OUTPUT);
    pinMode(led,OUTPUT);

    

}

void loop() {
  
     int olcum = mesafe(maksimum,minimum);

     melodi(olcum*10);
     if(olcum >= 0 || olcum <= 50)
     {
        digitalWrite(led,HIGH);
        delay(olcum*5);
        digitalWrite(led,LOW);
        delay(olcum*2);
     }
     else
     {
        digitalWrite(led,LOW);
        delay(olcum*5);
        
     }

}

int mesafe(int maks,int min)
{
  long sure,mesafemiz;
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  sure = pulseIn(echoPin,HIGH);
  mesafemiz= sure / 58.2;
  delay(50);
  
  if(mesafemiz >= maks || mesafemiz <=min) 
    return 0;
  
  

  return mesafemiz;
}

int melodi(int gecikme)
{
   tone(buzzerPin,400);
   delay(gecikme);
   noTone(buzzerPin);
   delay(gecikme);
}



