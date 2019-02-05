int Count = 0;
void setup() {
Serial.begin(9600);
}

void loop() {
if(Count < 10)
{
  Serial.print(Count);
  Serial.println("Count is less than 10");
  
}
else
{
  Serial.print(Count);
  Serial.println("Count is not less than 10");
}
delay(1000);
Count++;
}
