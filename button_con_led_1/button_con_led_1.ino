
int const led1 = 11;
int const led2 = 12;
int const led3 = 13;
int const button = 3;
int estado = 0;
//int aux = 0;




void setup() {

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button,INPUT);

}//Fin del setup

void loop() {

  estado = digitalRead ( button );

    if (estado == HIGH){
    //digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
        
  }else{
    //digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,1);
    
  }//Fin del if / else

  
  


  

}//Fin del loop
