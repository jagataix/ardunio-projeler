
#define kirmizi_led 8

void setup() {
  
    pinMode(kirmizi_led,OUTPUT);
}

void loop() {
  
    digitalWrite(kirmizi_led,HIGH);
    delay(400);
    digitalWrite(kirmizi_led,LOW);
    delay(400);
}
