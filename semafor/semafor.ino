/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
*                                                                                **
*                                 semafors                                       **
*                                                                                **
*                                                                                **
*                                                                                **                                             
*       David Jurado                                           13/03             **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************


//********** Variables ************************************************************
const int semaforAR = 7;          
const int semaforAT = 8;          
const int semaforAV = 9;          
const int semaforBR = 10;         
const int semaforBT = 11;         
const int semaforBV = 12;        
int pausa = 500;             

//********** Setup ****************************************************************
void setup()
{
  pinMode(semaforAR, OUTPUT); 
  pinMode(semaforAT, OUTPUT);    
  pinMode(semaforAV, OUTPUT);    
  pinMode(semaforBR, OUTPUT);     
  pinMode(semaforBT, OUTPUT);     
  pinMode(semaforBV, OUTPUT);     
  digitalWrite(semaforAR, HIGH);    
  digitalWrite(semaforAT, LOW);    
  digitalWrite(semaforAV, LOW);   
  digitalWrite(semaforBR, HIGH);    
  digitalWrite(semaforBT, LOW);    
  digitalWrite(semaforBV, LOW);     
  
  delay(pausa);                     
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(semaforBR, LOW);     
  digitalWrite(semaforBV, HIGH);    
  
  delay(6*pausa);                   
  
  digitalWrite(semaforBV, LOW);     
  digitalWrite(semaforBT, HIGH);    
  
  delay(pausa);                     
  
  digitalWrite(semaforBT, LOW);     
  digitalWrite(semaforBR, HIGH);    
   
  delay(pausa);                     
  
  digitalWrite(semaforAR, LOW);     
  digitalWrite(semaforAV, HIGH);    
  
  delay(6*pausa);                   
  
  digitalWrite(semaforAV, LOW);    
  digitalWrite(semaforAT, HIGH);    
  
  delay(pausa);                     
  
  digitalWrite(semaforAT, LOW);     
  digitalWrite(semaforAR, HIGH);    
  
   delay(pausa);                     
}



