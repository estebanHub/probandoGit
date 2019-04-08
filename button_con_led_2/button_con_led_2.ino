
// prende secuencialmente un led cada vez que se presiona el boton
// probando ramas
//version 1

int const led1 = 11;
int const led2 = 12;
int const led3 = 13;
int const button = 3;
int estado = 0;
int aux = 0;

void setup() {

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600); 

}//Fin del setup

void loop() {

  
  
  Serial.println(aux); // muestra el contador en pantalla
  delay(130);

  estado = digitalRead ( button );

  if (estado == LOW){ // suma 1 al contador aux cuando se presiona el boton

    aux = aux + 1;
       
    }//Fin del if


  if (aux == 0){ 

    //digitalWrite(led1,LOW);
    //digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    
    }

  if (aux == 1){
    
    digitalWrite(led1,HIGH);
    //digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    
    }//Fin del if

  if (aux == 2){

    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    //digitalWrite(led3,LOW);
    }//Fin del if
  
  if (aux == 3){
    
    //digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
        
    }//Fin del if    
        
  if (aux >= 4){
    
    aux = 0;
    
    }
 

}//Fin del loop
