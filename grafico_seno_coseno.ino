void setup() {
  Serial.begin(9600);

}

void loop() {
  float a;
  float c;
  float b = 0.00; //corrisponde all'angolo 0 gradi=0 rad
  int t = 100;
  a = sin(b);
  c = cos(b);
  Serial.print("sin:");
  Serial.print(a);
  Serial.print(",");
  Serial.print("cos:");
  Serial.println(c);
  delay(t);
  
  b = 1.57; // corrisponde all'angolo 90 gradi=π/2 rad
  a = sin(b);
  c = cos(b);
  Serial.print("sin:");
  Serial.print(a);
  Serial.print(",");
  Serial.print("cos:");
  Serial.println(c);
  delay(t);
  
  b = 3.14; // corrisponde all'angolo 180 gradi=π rad
  a = sin(b);
  c = cos(b);
  Serial.print("sin:");
  Serial.print(a);
  Serial.print(",");
  Serial.print("cos:");
  Serial.println(c);
  delay(t);
  
  b = 4.71; // corrisponde all'angolo 270 gradi=(3/2)π rad
  a = sin(b);
  c = cos(b);
  Serial.print("sin:");
  Serial.print(a);
  Serial.print(",");
  Serial.print("cos:");
  Serial.println(c);
  delay(t);
  

}