#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8 

#define LT 6
#define BT 7

int pinlnterrupt=2;
void onChange()
 {
     if(digitalRead(pinInterrupt) == LOW )
     { i=0;}
     else if(digitalRead(pinInterrupt)==HIGH)
     {i=i;}
 }
   
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(LT, OUTPUT);
  pinMode(BT, OUTPUT);
  Serial.begin(9600);
  pinMode( pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}
void loop()
{
  int income,i;
  for(i=0;i<10;i++)
 {
    income=i;
    byte(income);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1000);
 }
 
