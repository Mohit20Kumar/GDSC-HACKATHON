int ledpin= 6;
int pirpin= 4;
int pirstat= 0;



void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(pirpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  pirstat= digitalRead(pirpin);
  Serial.println(pirstat);
  delay(1000);
  
  /*if (pirstat < 300)
  {
    analogWrite(ledpin, 255);
    Serial.println("Motion Detected");
    delay(1000);
  }
  else
  {
    analogWrite(ledpin,0);
    Serial.println("Motion Not Detected");
    delay(1000);*/
  
  
  }
