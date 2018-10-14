void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(12, INPUT);
  pinMode(2, INPUT);
  pinMode(A5, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT); 

  pinMode(11, OUTPUT);

  Serial.begin(9600);
}

String bin = "";
String lastBin = "";

void loop() {
  delay(100);
  digitalWrite(11, HIGH);
  delay(100);

  byte a3 = digitalRead(3);
  byte a4 = digitalRead(4);
  byte a5 = digitalRead(5);
  byte a6 = digitalRead(6);
  byte a7 = digitalRead(7);
  byte a8 = digitalRead(8);
  byte a9 = digitalRead(9);
  byte a10 = digitalRead(10);
  byte a11 = digitalRead(12);
  byte a2 = digitalRead(2);
  byte a5a = digitalRead(A5);
  byte a0a = digitalRead(A0);
  byte a1a = digitalRead(A1);
  byte a2a = digitalRead(A2);
  byte a3a = digitalRead(A3);
  byte a4a = digitalRead(A4);

  word address_value = a4a << 15;
  address_value  += a3a << 14;
  address_value  += a2a << 13;
  address_value  += a1a << 12;
  address_value  += a0a << 11;
  address_value  += a5a << 10;
  address_value  += a2 << 9;
  address_value  += a11 << 8;
  address_value  += a10 << 7;
  address_value  += a9 << 6;
  address_value  += a8 << 5;
  address_value  += a7 << 4;
  address_value  += a6 << 3;
  address_value  += a5 << 2;
  address_value  += a4 << 1;
  address_value  += a3;

  Serial.print(address_value, 2);
  Serial.print(" : ");
  Serial.println(address_value, HEX);

  digitalWrite(11, LOW);
}

