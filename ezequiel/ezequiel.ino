
int foquito  = 12;

int foquitorojo = 11;



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(foquitorojo, OUTPUT);

  pinMode (foquito,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(foquitorojo, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(foquito, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                   // wait for a second
 digitalWrite(foquitorojo, LOW); 
 delay(1000);
 digitalWrite(foquito, HIGH);
 }//fIN DEL LOOP 
  
