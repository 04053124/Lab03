float sensorValue=0;
float sensorVoltage;
float Vin=2.5;
float R=500000;
float R1;
float R2;
float val;

void setup()
{
  Serial.begin(9600);
  pinMode(15,INPUT);
}
void loop(){
  int i;
 for (i=0;i<=5;i++)
  sensorValue = 0.7* sensorValue + 0.3* analogRead(15);
  sensorVoltage  = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * R / Vin;
  R2=R-R1;
  sensorVoltage= (Vin * R1) / R;
  val=analogRead(15);
  
 Serial.print("analogRead=");
 Serial.print(val);
 Serial.print("\tsensorVoltage=");
 Serial.print(sensorVoltage );
 Serial.print("\tR=");
 Serial.print(R);
 Serial.print("\tR1=");
 Serial.print(R1);
 Serial.print("\tR2=");
 Serial.println(R2);
 
 delay(500);
}
