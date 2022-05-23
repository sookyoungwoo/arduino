void setup() {
  Serial.begin(9600);

  Serial.println("start : ");
  Serial.println("write data : ");
  Serial.write('A');
  Serial.write('\n');
  Serial.write(65); //아스키코드 값이 나옴 
  Serial.write('\n');
  Serial.write("Hello");
  Serial.write('\n');

  char str[] = {'W', 'o', 'r', 'l', 'd', '\0'};
  Serial.write('\n');
  Serial.println(sizeof);
  Serial.write(str);
  Serial.write('\n');
  Serial.write(str, 3);
}

void loop() {
  // put your main code here, to run repeatedly:

}
