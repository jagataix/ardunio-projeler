#define pin A0

int deger=0;

void setup() {
  
    Serial.begin(9600);
    Serial.println("Pot değer okuma");
}

void loop() {
  
   deger = analogRead(pin);
   float gerilim = (5.00/1024)*deger;

   Serial.println("Gerilim : ");
   Serial.println(gerilim);
   delay(100);
  

}
