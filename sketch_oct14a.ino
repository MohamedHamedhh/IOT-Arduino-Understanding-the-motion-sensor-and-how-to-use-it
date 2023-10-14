#define led3 3
#define pin4 4
void setup() {
 pinMode(led3,OUTPUT);
 pinMode(pin4,INPUT);
}
void loop() {
  if(digitalRead(pin4)==HIGH)
  digitalWrite(led3,HIGH);
  else
  digitalWrite(led3,LOW);
}
