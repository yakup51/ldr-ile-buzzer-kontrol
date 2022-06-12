int buzzer1=9;
int buzzer2=10;
int led1=5;
int led2=6;
int ldr1=A0;
int ldr2=A1;
int okunanDeger1=0;
int okunanDeger2=0;
int cevirim1=0;
int cevirim2=0;
void setup() 
{
  pinMode(buzzer1,OUTPUT);
  pinMode(buzzer2,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(ldr1,INPUT);
  pinMode(ldr2,INPUT);
  Serial.begin(9600);
}
void loop() 
{
  okunanDeger1=analogRead(A0);
  okunanDeger2=analogRead(A1);
  cevirim1=map(okunanDeger1,400,0,0,255);
  cevirim2=map(okunanDeger2,100,0,255,0);
  analogWrite(buzzer1,okunanDeger1);
  analogWrite(buzzer2,okunanDeger2);
  analogWrite(led1,cevirim1);
  analogWrite(led2,cevirim2);
  /*Serial.print(cevirim1);
  delay(500);
  Serial.println(cevirim2);
  delay(500);*/
}
