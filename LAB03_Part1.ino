const byte ledPin =14;
byte val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(14, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  val = Serial.read();
  if(val == '1'){
    digitalWrite(14,HIGH);
    Serial.println("LED ON");
  } else if(val == '0'){
      digitalWrite(14,LOW);
      Serial.println("LED OFF");
    }
  
  
}
}
