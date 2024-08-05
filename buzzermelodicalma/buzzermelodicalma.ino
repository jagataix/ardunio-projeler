int buzzer = 12; 
int led_d = 1;
int led_e = 2;
int led_f = 3;
int led_g = 4;
int led_a = 5;
int led_b = 6;
int led_c2 = 7;
int led_d2 = 8;
int led_e2 = 9;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led_d,OUTPUT);
  pinMode(led_e,OUTPUT);
  pinMode(led_f,OUTPUT);
  pinMode(led_g,OUTPUT);
  pinMode(led_a,OUTPUT);
  pinMode(led_b,OUTPUT);
  pinMode(led_c2,OUTPUT);
  pinMode(led_d2,OUTPUT);
  pinMode(led_e2,OUTPUT);
  
}

void loop() {
  
  int c = 265; 
  int d = 294; 
  int e = 329; 
  int f = 349; 
  int g = 392; 
  int a = 440; 
  int b = 493; 
  int c2 = 520; 
  int d2 = 294*2; 
  int e2 = 329*2; 
  int f2 = 349*2; 
  int g2 = 392*2; 
  int a2 = 440*2; 
  int b2 = 493*2; 
  int c3 = 520*2;

  int yanan = 100;

  
  int gamzedeyim_deva_bulmam_notalar[] = {392,520,493,520,493,520,493,520,493,520,588,658,588,520,493,440,349,440,392,440,493,392,349,294,329,493,440,440,392,392,349,349,329,329};
  //char gamzedeyim_deva_bulmam_ton[40] = {g,c2,b,c2,b,c2,b,c2,b,c2,d2,e2,d2,c2,b,a,f,a,g,a,b,g,f,d,e,b,a,a,g,g,f,f,e,e};
  int gamzedeyim_deva_bulmam_aralik[] = {1000,500,500,500,500,500,500,750,250,500,500,250,250,250,250,1000,1000,500,500,500,500,500,500,500,500,250,250,250,250,250,250,250,250,1000};

  int parca_uzunlugu = sizeof(gamzedeyim_deva_bulmam_notalar) / sizeof(gamzedeyim_deva_bulmam_notalar[0]);

  for(short int i=0;i<50;i++)
  {
     tone(buzzer, gamzedeyim_deva_bulmam_notalar[i]*2);
    if (gamzedeyim_deva_bulmam_notalar[i] == d)
    {
      yanan = led_d;
      digitalWrite(yanan,HIGH);
    } 
    if (gamzedeyim_deva_bulmam_notalar[i] == e)
    {
      yanan = led_e;
      digitalWrite(yanan,HIGH);
    } 
    if (gamzedeyim_deva_bulmam_notalar[i] == f)
    {
      yanan = led_f;
      digitalWrite(yanan,HIGH);
    } 
    if (gamzedeyim_deva_bulmam_notalar[i] == g)
    {
      yanan = led_g;
      digitalWrite(yanan,HIGH);
    }
    if (gamzedeyim_deva_bulmam_notalar[i] == a)
    {
      yanan = led_a;
      digitalWrite(yanan,HIGH);
    }
    if (gamzedeyim_deva_bulmam_notalar[i] == b)
    {
      yanan = led_b;
      digitalWrite(yanan,HIGH);
    }
    if (gamzedeyim_deva_bulmam_notalar[i] == c2)
    {
      yanan = led_c2;
      digitalWrite(yanan,HIGH);
    }
    if (gamzedeyim_deva_bulmam_notalar[i] == d2)
    {
      yanan = led_d2;
      digitalWrite(yanan,HIGH);
    }
    if (gamzedeyim_deva_bulmam_notalar[i] == e2)
    {
      yanan = led_e2;
      digitalWrite(yanan,HIGH);
    }
     delay(gamzedeyim_deva_bulmam_aralik[i]); 
     noTone(buzzer);
     digitalWrite(yanan,LOW);
     
     if(i==parca_uzunlugu-1)
     {
        i = 0;
     }
        
  }
}