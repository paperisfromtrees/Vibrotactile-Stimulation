const int motor1 = 13;
const int motor2 = 11;
const int motor3 = 8;
const int motor4 = 6;
const int motor5 = 2;
int bpm = 60;
int timedur = 950;


void act_deact_motor1(int duration){
  digitalWrite(motor1, 150);
  delay(duration);
  digitalWrite(motor1, 0);
  Serial.println("1");
}
void act_motor1(){
  digitalWrite(motor1, HIGH);
}
void deact_motor1(){
  digitalWrite(motor1, 0);
  delay(50);
}

void act_deact_motor2(int duration){
  digitalWrite(motor2, 150);
  delay(duration);
  digitalWrite(motor2, 0);
  Serial.println("2");
}
void act_motor2(){
  digitalWrite(motor2, HIGH);
}
void deact_motor2(){
  digitalWrite(motor2, 0);
  delay(50);
}

void act_deact_motor3(int duration){
  digitalWrite(motor3, 150);
  delay(duration);
  digitalWrite(motor3, 0);
  Serial.println("3");
}
void act_motor3(){
  digitalWrite(motor3, 150);
}
void deact_motor3(){
  digitalWrite(motor3, 0);
  delay(50);
}

void act_deact_motor4(int duration){
  digitalWrite(motor4, 150);
  delay(duration);
  digitalWrite(motor4, 0);
  Serial.println("4");
}
void act_motor4(){
  digitalWrite(motor4, 150);
}
void deact_motor4(){
  digitalWrite(motor4, LOW);
  delay(50);
}

void act_deact_motor5(int duration){
  digitalWrite(motor5, 150);
  delay(duration);
  digitalWrite(motor5, 0);
  Serial.println("5");
}
void act_motor5(){
  digitalWrite(motor5, 150);
}
void deact_motor5(){
  digitalWrite(motor5, 0);
  delay(50);
}

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  pinMode(motor5,OUTPUT);
  Serial.begin(74880);
}

void loop() {
  
  act_deact_motor5(1000);
  act_deact_motor3(1000);
  act_deact_motor2(1000);
  act_deact_motor1(1000);
  act_deact_motor2(1000);
  act_deact_motor3(1000);
  act_deact_motor5(1000);
  act_deact_motor3(1000);
  act_deact_motor2(1000);
  act_deact_motor1(1000);
  act_deact_motor2(450);
  act_deact_motor3(450);
  act_deact_motor2(450);
  act_deact_motor3(450);
  delay(3000);
}
