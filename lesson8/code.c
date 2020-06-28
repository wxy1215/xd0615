
int sensorValue = 0;//���崫����ֵΪ0  

int outputValue = 0;//�������ֵΪ0 

void setup()
{
  pinMode(A0, INPUT);//�趨A0����Ϊ����ģʽ 
  pinMode(9, OUTPUT);//�趨��������pin9Ϊ���ģʽ 
  Serial.begin(9600);//���ڳ�ʼ�� 

}

void loop()
{
  // ��ȡģ��ֵ 
  sensorValue = analogRead(A0);
  // ����ӳ�䵽ģ���źŵķ�Χ��
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // �ı�ģ�����ֵ
  analogWrite(9, outputValue);
  // �ѽ����ӡ�����м�������
  Serial.print("sensor = ");//���д����sensor=�� 
  Serial.print(sensorValue);//���������ֵ 
  Serial.print("\t output = ");//���д����\t output=�� 
  Serial.println(outputValue);//��ASCII����ʮ���Ƹ���ֵ��� 
  //����һ��ѭ��֮ǰ�ȴ�2����ʹģ������ת���������һ�ζ�ȡ�󰲶����� 
  delay(2); // �ȴ�2���� 
}
