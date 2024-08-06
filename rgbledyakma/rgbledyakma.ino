#define kirmizi 11
#define yesil 10
#define mavi 9

#define pot_kirmizi A0
#define pot_yesil A1
#define pot_mavi A2


void setup() {
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);


}

void loop() {

  int kirmizi_deger = analogRead(pot_kirmizi);
  int yesil_deger = analogRead(pot_yesil);
  int mavi_deger = analogRead(pot_mavi);

  kirmizi_deger = map(kirmizi_deger,0,1023,0,255);
  yesil_deger = map(yesil_deger,0,1023,0,255);
  mavi_deger = map(mavi_deger,0,1023,0,255);

  analogWrite(kirmizi,kirmizi_deger);
  analogWrite(yesil,yesil_deger);
  analogWrite(mavi,mavi_deger);
  

}
