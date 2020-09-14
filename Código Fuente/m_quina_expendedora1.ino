
//Máquina de Estados - Máquina Expendedora 
#include <LiquidCrystal.h>
  
int A = 0; // MONEDA DE 100
int B = 0; // MONEDA DE 50
int C=0; // ACUMULADO
int D=1; // VARIABLE PARA LOS ESTADOS
int Pul1 = A0; // PULSADOR 1
int Pul2 = A1; // PULSADOR 2
int Enter = A2; // PULSADOR 3
int Led = A3; // ACTUADOR
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //PINES ARDUINO TO LCD


// DECLARACIÓN DE ENTRADAS Y SALIDAS
void setup() {
  lcd.begin(16, 2);
  pinMode(A0, INPUT); // PULSADOR 1 COMO ENTRADA
  pinMode(A1, INPUT); // PULSADOR 2 COMO ENTRADA
  pinMode(A2, INPUT); // PULSADOR 3 COMO ENTRADA
  pinMode(A3, OUTPUT);// ACTUADOR COMO SALIDA
  }
 
void loop() {
  
  switch(D){
    
 case 1: // PRIMER ESTADO
    
   if(digitalRead(A0) == 0 and digitalRead(A1) == 0){// LECTURA DE PINES PARA PULSADOR 1 Y 2
    lcd.setCursor(0, 0);
    lcd.print("INGRESE $150: "); // PRIMER TEXTO MOSTRADO
    lcd.setCursor(0,1);
    lcd.print("SALDO: $");           // PRIMER TEXTO MOSTRADO
    lcd.setCursor(8,1);
    lcd.print(C);
    if(digitalRead(Pul1) == 1){
     A=100;
     C+=A;
     D=2;} // PASA AL CASO 2
    if(digitalRead(Pul2) == 1){
      B=50;
      C+=B;
     D=3;}} // PASA AL CASO 3
    if(digitalRead(A2) == 1){
       D=4;
    }
    break;
 
case 2: // SEGUNDO ESTADO
  
   if(A==100){ // Condición para 100
    lcd.setCursor(8,1);
    lcd.print(C); // IMPRIMIR ACUMULADO
    D=1;
    }
    break;
   
case 3: // TERCER ESTADO
    
   if(B==50){ // CONDICIÓN PARA 50
    lcd.setCursor(8,1);
    lcd.print(C); // IMPRIMIR ACUMULADO
    D=1;
    }
    break;

case 4: // CUARTO ESTADO
   if(C>=150){  // CONDICIÓN PARA EL ACUMULADO
    digitalWrite(A3,HIGH); // ACTUADOR ENCENDIDO
    lcd.clear();           // LIMPIAR PANTALLA
    lcd.setCursor(1,0);
    lcd.print("TOME SU BEBIDA"); // SEGUNDO MENSAJE
    lcd.setCursor(3,1);          
    lcd.print("GRACIAS ;)");     // SEGUNDO MENSAJE
    delay(2000);       // TIEMPO EN PANTALLA
    lcd.clear(); // LIMPIAR PANTALLA
    digitalWrite(A3,LOW); // ACTUADOR APAGADO
    A=0; // REGRESO AL PRIMER ESTADO
    B=0; // REGRESO AL PRIMER ESTADO
    C=0; // REGRESO AL PRIMER ESTADO
    D=1; // REGRESO AL PRIMER ESTADO
    }
    break;     
  } 
}