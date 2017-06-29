
//Declaração das constantes
const int led1 = 3;   
const int led2 = 2;
const int botao1 = 8;
const int botao2 = 9;  
//Declaração de variáveis
int estadoBotao1 = 0;
int estadoBotao2 = 0;
int pwm = 0;
int repete = 0;
int enquanto = 0;

//Setup GPIO
void setup() {
  //input
  pinMode(led1,OUTPUT);  
  pinMode(led2, OUTPUT);
  //output
  pinMode(botao1,INPUT);
  pinMode(botao2,INPUT); 
}
 
void loop() {  
 
  estadoBotao1 = digitalRead(botao1);          

if (estadoBotao1 == HIGH){

  repete++;
  delay (250); 
}
  while (repete > 0){
  pwm = pwm + 32; 
    repete--;
  }

analogWrite (led1, pwm);

estadoBotao2 = digitalRead(botao2);

if (estadoBotao2 == HIGH){
  repete++;
  delay (250); 
}
  while (repete > 0){
  pwm = pwm - 32; 
    repete--;
  }
}

