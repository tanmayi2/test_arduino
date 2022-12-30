#define enable 9
#define A1 8
#define A2 7
#define button 10

int buttonState = 0;        // current state of the button
int lastButtonState = 0;    // previous state of the button
int motorState = 0; // 0 for left, 1 for right

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(enable, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(button);

  if (buttonState != lastButtonState && buttonState == HIGH) {
    if(motorState == 0) {
      digitalWrite(enable, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);
      motorState = 1;
      Serial.println("change to right");
    } else {
      digitalWrite(enable, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);
      motorState = 0;
      Serial.println("change to left"); 
    }
    delay(50);
  }
  
  lastButtonState = buttonState;

}
