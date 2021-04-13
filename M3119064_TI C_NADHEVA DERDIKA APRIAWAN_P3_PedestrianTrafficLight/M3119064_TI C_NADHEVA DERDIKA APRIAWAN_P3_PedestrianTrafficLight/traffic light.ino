void setup() {
  // put your setup code here, to run once:
for(int x=2; x<=13; x++)
{pinMode(x, OUTPUT);}
}

void loop() {
  // put your main code here, to run repeatedly:
  
  lptigahijau();
  lpduamerah();
    
 tujuh();
 delay(200);
 enam();
 delay(200);
 lima();
 delay(200);
 empat();
 delay(200);
 tiga();
 delay(200);
 dua();
 delay(200);
 satu();
 delay(200);
 nol();
 delay(200);

 lptigamerah();
 lpduahijau();

 sembilan();
 delay(200);
 delapan();
 delay(200);
 tujuh();
 delay(200);
 enam();
 delay(200);
 lima();
 delay(200);
 empat();
 delay(200);
 tiga();
 delay(200);

 lptigakuning();
 
 dua();
 delay(100);
 satu();
 delay(100);
 nol();
 delay(100);
}

void nol(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, 0);
}

void satu(){
digitalWrite(13, 0);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, 0);
digitalWrite(9, 0);
digitalWrite(8, 0);
digitalWrite(7, 0);
}

void dua(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, 0);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, 0);
digitalWrite(7, HIGH);
}

void tiga(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, 0);
digitalWrite(8, 0);
digitalWrite(7, HIGH);
}

void empat(){
digitalWrite(13, 0);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, 0);
digitalWrite(9, 0);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
}

void lima(){
digitalWrite(13, HIGH);
digitalWrite(12, 0);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, 0);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
}

void enam(){
digitalWrite(13, HIGH);
digitalWrite(12, 0);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
}

void tujuh(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, 0);
digitalWrite(9, 0);
digitalWrite(8, 0);
digitalWrite(7, 0);
}

void delapan(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
}

void sembilan(){
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, 0);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
}

void lptigamerah(){
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}

void lptigakuning(){
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
}

void lptigahijau(){
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}

void lpduamerah(){
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
}

void lpduahijau(){
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
}
