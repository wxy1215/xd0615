
int sensorValue = 0;//定义传感器值为0  

int outputValue = 0;//定义输出值为0 

void setup()
{
  pinMode(A0, INPUT);//设定A0引脚为输入模式 
  pinMode(9, OUTPUT);//设定数字引脚pin9为输出模式 
  Serial.begin(9600);//串口初始化 

}

void loop()
{
  // 读取模拟值 
  sensorValue = analogRead(A0);
  // 把它映射到模拟信号的范围内
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // 改变模拟输出值
  analogWrite(9, outputValue);
  // 把结果打印到序列监视器上
  Serial.print("sensor = ");//串行打出“sensor=” 
  Serial.print(sensorValue);//输出传感器值 
  Serial.print("\t output = ");//串行打出“\t output=” 
  Serial.println(outputValue);//以ASCII编码十进制浮点值输出 
  //在下一个循环之前等待2毫秒使模拟数字转换器在最后一次读取后安定下来 
  delay(2); // 等待2毫秒 
}
