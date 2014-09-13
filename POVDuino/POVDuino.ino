//List your pins that control lights
int pinA = 11;
int pinB = 10;
int pinC = 9;
int pinD = 8;
int pinE = 7;
int pinF = 6;
int pinG = 5;
int pinH = 4;
int pinI = 3;
int pinJ = 2;

int subletspace = 250;
int letspace = 150;
int wordspace = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void configuration() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(wordspace);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
}
  
void printA() {
  digitalWrite(pinA, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinF, HIGH);
  delay(subletspace);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(subletspace);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, HIGH);
  delay(subletspace);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, HIGH);
  delay(subletspace);
  digitalWrite(pinJ, LOW);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinI, LOW);
  digitalWrite(pinH, HIGH);
  delay(subletspace);
  digitalWrite(pinH, LOW);
  digitalWrite(pinG, HIGH);
  delay(subletspace);
  digitalWrite(pinG, LOW);
  digitalWrite(pinF, HIGH);
  delay(subletspace);
  digitalWrite(pinF, LOW);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinC, LOW);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinA, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
}

void printB() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(subletspace);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinJ, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinA, HIGH);
  delay(5*subletspace);
  digitalWrite(pinA, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinI, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinB, LOW);
  delay(subletspace);
}

void printC() {
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace);
  digitalWrite(pinJ, HIGH);
  digitalWrite(pinA, HIGH);
  delay(6*subletspace);
  digitalWrite(pinA, LOW);
  digitalWrite(pinJ, LOW);
}
  
void orientationtest() {
  digitalWrite(pinJ, HIGH);
}
  
void loop() {
 printC();
  
}