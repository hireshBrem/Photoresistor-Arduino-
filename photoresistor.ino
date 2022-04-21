
int readPin = A0;
int readVal;
int delayTime = 500;
int redPin = 7;
int greenPin =8;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  if(readVal >=650){
    digitalWrite(greenPin,HIGH); 
    digitalWrite(redPin, LOW);
  }
  if (readVal <= 200){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin,LOW); 
  }
  Serial.println(readVal);
  delay(delayTime);
}
