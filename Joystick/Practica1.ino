int btn = 7;

void setup()
{

  Serial.begin(9600);
  pinMode(btn, INPUT);

}

void loop() {

int x, y, k;
x = analogRead(A0);
y = analogRead(A1);
k = analogRead(btn);

Serial.print(x);
Serial.print(",");
Serial.print(y);
Serial.print(",");
Serial.println(k);

}
