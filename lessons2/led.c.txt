int i=0;
void setup()
{
  for (i=0;i<8;i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for (i=0;i<8;i++)
  {
   if(i%2!=0)
   {
     digitalWrite(i,HIGH);
     delay(1000);
     digitalWrite(i,LOW);
     delay(1000);
   }
   else if(i%2==0)
   {
     digitalWrite(i,HIGH);
   }
  }
 }