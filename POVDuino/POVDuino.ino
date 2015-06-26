//List your pins that control lights
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinH = 9;
int pinI = 10;
int pinJ = 11;

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

//This script allows one to test that all of the LEDs light up properly and then the orientation. If executed correctly, all LEDs should flash and then the top LED should stay on.
//If the bottom LED illuminates instead of the top, replace values (i.e change pinA to pinJ and pinB to pinI and so on).
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(wordspace);
  digitalWrite(pinJ, HIGH);
  delay(wordspace*2);
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

void printD() {
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
  digitalWrite(pinI, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinB, LOW);
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
  digitalWrite(pinE, LOW);
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
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinI, LOW);
}

void printE() {
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
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(6*subletspace);
}

void printF() {
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(6*subletspace);
}

void printG() {
  digitalWrite(pinF, HIGH);
  delay(subletspace);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinC, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinF, HIGH);
  delay(3*subletspace);
  digitalWrite(pinF, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinA, LOW);
}

void printH() {
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace*5);
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
}

void printI() {
  digitalWrite(pinJ, HIGH);
  digitalWrite(pinA, HIGH);
  delay(subletspace*3);
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
  delay(subletspace*3);
  digitalWrite(pinA, LOW);
  digitalWrite(pinJ, LOW);
}

void printJ() {
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(subletspace);
  digitalWrite(pinC, LOW); 
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinA, HIGH);
  delay(subletspace); 
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace*3);
  digitalWrite(pinJ, LOW);
}

void printK() {
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinC, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, HIGH);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinJ, LOW);
  digitalWrite(pinA, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
}

void printL() {
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
  digitalWrite(pinA, LOW);
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
  digitalWrite(pinA, HIGH);
  delay(subletspace*6);
  digitalWrite(pinA, LOW);
}

void printM() {
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinJ, LOW);
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
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
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
  digitalWrite(pinA, LOW);
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
 
void printN() {
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinJ, LOW);
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
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
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

void printO() {
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
  delay(subletspace*8);
  digitalWrite(pinJ, LOW);
  digitalWrite(pinA, LOW);
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
}

void printP(){
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace*3);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinG, HIGH);
  delay(subletspace);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
}

void printQ() {
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
  digitalWrite(pinA, HIGH);
  digitalWrite(pinJ, HIGH);
  delay(subletspace*5);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinJ, LOW);
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
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinA, LOW);
  delay(subletspace);
}
  
void printR(){
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
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace);
  digitalWrite(pinE, LOW);
  digitalWrite(pinD, HIGH);
  delay(subletspace);
  digitalWrite(pinD, LOW);
  digitalWrite(pinC, HIGH);
  delay(subletspace);
  digitalWrite(pinI, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinB, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
  digitalWrite(pinA, LOW);
  delay(subletspace);
}  

void printS() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinJ, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace*3);
  digitalWrite(pinA, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  delay(subletspace);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  delay(subletspace);
  digitalWrite(pinJ, LOW);
  delay(subletspace);
}

void printT() {
  digitalWrite(pinJ, HIGH);
  delay(subletspace*4);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinH, HIGH);
  digitalWrite(pinI, HIGH);
  delay(subletspace);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinH, LOW);
  digitalWrite(pinI, LOW);
  delay(subletspace*5);
  digitalWrite(pinJ, LOW);
}
  
void loop() {
 printR();
  
}
