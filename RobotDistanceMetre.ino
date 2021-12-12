int motor1pin1 = 4;
int motor1pin2 = 5;
int motor1pin3 = 6;
int motor1pin4 = 7;
const int pwm1 = 3;  
const int pwm2 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor1pin3, OUTPUT);
  pinMode(motor1pin4, OUTPUT);
  pinMode(pwm1,OUTPUT) ;    
  pinMode(pwm2,OUTPUT) ; 
}

void loop() {
  // put your main code here, to run repeatedly:   
 // makes move 1m distance
  delay(5000);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  analogWrite(pwm1,255);
  digitalWrite(motor1pin3, HIGH);
  digitalWrite(motor1pin4, LOW);
  analogWrite(pwm2,248);
  delay(2000); 

// stops motors
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor1pin3, LOW);
  digitalWrite(motor1pin4, LOW);
  exit(0);

}
