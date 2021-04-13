void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
for (int i=10; i<13; i++){
  pinMode(i, OUTPUT); //i++ --> i = i+1;
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay(300);
digitalWrite(13, LOW);
delay(300);
digitalWrite(13, HIGH);
delay(300);
digitalWrite(13, LOW);
delay(300);
digitalWrite(13, HIGH);
delay(300);
digitalWrite(13, LOW);
delay(300);

digitalWrite(12, HIGH);
delay(300);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
delay(300);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(300);
digitalWrite(10, LOW);
digitalWrite(10, HIGH);
delay(300);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(300);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(300);
digitalWrite(10, LOW);
digitalWrite(10, HIGH);
delay(300);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(11, HIGH);
delay(300);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(12, HIGH);
delay(300);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
digitalWrite(13, HIGH);
digitalWrite(13, LOW);

/*for (int i=13; i>=13; i>=10; i--){
 digitalWrite(i, HIGH);
 delay(300);
 digitalWrite(i+1, LOW);
 delay(300);
}
digitalWrite(10, LOW);
*/
}
