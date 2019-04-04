
int const led1 = 11;
int const led2 = 12;
int const led3 = 13;
int const button = 3;
int estado = 0;
int estadoLed = 0;
int aux = 0;

void setup() {

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600); 

}//Fin del setup

void loop() {

  
  // print the result:
  //Serial.println(estado); // siempre esta high = 1
  Serial.println(estadoLed); // siempre esta high = 1
  // wait 10 milliseconds for the analog-to-digital converter
  // to settle after the last reading:
  delay(130);

  estado = digitalRead ( button );
  

  if (estado == HIGH){
    
    digitalWrite (led1, HIGH);
    }else {

      digitalWrite (led1,LOW);
      
      
      }


}// fin del loop
