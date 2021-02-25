void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);

  int led1 = 8;
  int led2 = 7;
  int led3 = 2;
  int led4 = 12;
  int time_ = 5000;
  //1 in binary code:
  digitalWrite(led4, HIGH);
  delay(time_);
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  delay(time_);
  digitalWrite(led4, HIGH);
  delay(time_);
  digitalWrite(led4, LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2, HIGH);
  delay(time_);
  digitalWrite(led4,HIGH);
  delay(time_);
  digitalWrite(led4,LOW);
  digitalWrite(led2,LOW);

}

void loop() {
//nothing in here because it dont want this to be a loop!
}
