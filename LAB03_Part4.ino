float sensorValue=0;
float sensorVoltage;
float R=5000000;
float R1;
float val;

void setup()
{
  Serial.begin(9600);
  pinMode(15,OUTPUT);
}
void loop(){
  int i;
 for (i=0;i<=5;i++)
  sensorValue = 0.7* sensorValue + 0.3* analogRead(15);
  sensorVoltage  = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * R / 2.5;
  val=analogRead(15);
  
 Serial.print("analogRead=");
 Serial.print(val);
 Serial.print("\tsensorVoltage=");
 Serial.print(sensorVoltage );
 Serial.print("\tR1=");
 Serial.println(R1);
 
 delay(500);
}
