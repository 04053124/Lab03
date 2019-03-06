word Analogin;
byte Vin;
int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Analogin = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<=5;i++)
    Analogin = 0.7*Analogin+ 0.3*analogRead(14);
    Serial.print(Analogin);
   Vin = Analogin*2.5/4095;
   Serial.print(Vin);
   delay(500);
}
