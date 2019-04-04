
int led1 = 12;
int led2 = 11;
int led3 = 13; 

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW); 
  delay(1000);                       // wait for a second
}
