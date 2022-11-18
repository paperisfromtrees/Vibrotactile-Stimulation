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
  digitalWrite(motor1, LOW);
  delay(70);
  Serial.println("1");
}
void act_motor1(){
  digitalWrite(motor1, 150);
}
void deact_motor1(){
  digitalWrite(motor1, LOW);
  delay(50);
}

void act_deact_motor2(int duration){
  digitalWrite(motor2, 150);
  delay(duration);
  digitalWrite(motor2, LOW);
  delay(70);
  Serial.println("2");
}
void act_motor2(){
  digitalWrite(motor2, HIGH);
}
void deact_motor2(){
  digitalWrite(motor2, LOW);
  delay(50);
}

void act_deact_motor3(int duration){
  digitalWrite(motor3, 150);
  delay(duration);
  digitalWrite(motor3, LOW);
  delay(70);
  Serial.println("3");
}
void act_motor3(){
  digitalWrite(motor3, HIGH);
}
void deact_motor3(){
  digitalWrite(motor3, LOW);
  delay(50);
}

void act_deact_motor4(int duration){
  digitalWrite(motor4, 150);
  delay(duration);
  digitalWrite(motor4, LOW);
  delay(70);
  Serial.println("4");
}
void act_motor4(){
  digitalWrite(motor4, HIGH);
}
void deact_motor4(){
  digitalWrite(motor4, LOW);
  delay(70);
}

void act_deact_motor5(int duration){
  digitalWrite(motor5, 150);
  delay(duration);
  digitalWrite(motor5, LOW);
  delay(70);
  Serial.println("5");
}
void act_motor5(){
  digitalWrite(motor5, HIGH);
}
void deact_motor5(){
  digitalWrite(motor5, LOW);
  delay(50);
}

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  pinMode(motor5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  act_deact_motor1(timedur);
  act_deact_motor3(timedur);
  act_deact_motor4(timedur);
  act_deact_motor5(timedur);
  act_deact_motor4(timedur);
  act_deact_motor3(timedur);
  act_deact_motor1(timedur);
  act_deact_motor5(timedur);
  act_deact_motor3(timedur);
  act_deact_motor5(timedur);
  act_deact_motor4(timedur);
  act_deact_motor5(timedur);
  act_deact_motor3(timedur);
  act_deact_motor5(timedur);
  delay(3000);
}
