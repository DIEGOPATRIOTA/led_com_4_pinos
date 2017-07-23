/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

void setup(){
   pinMode(0, OUTPUT);     
   pinMode(1, OUTPUT);     
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);     
   pinMode(4, OUTPUT);     
   pinMode(5, OUTPUT);   
   pinMode(6, OUTPUT);     
   pinMode(7, OUTPUT);     
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);     
   pinMode(10, OUTPUT);     
   pinMode(11, OUTPUT);   
}

void loop(){
  
  
  //LED A
  //0 = azul /  1 = vermelho  /  2 = verde / amarelo = 1,2
  
  //LED D
  // 9 = Vermelho / 10 = Verde / 11 = azul
  
  //verde
  digitalWrite(2, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  
  delay(4000);
  digitalWrite(2, LOW);
  digitalWrite(10, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
            
  //amarelo LED A e D
  //LED A
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
 //LED D
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  //
  delay(1000); 
  //amarelo LED B e C 
  //LED B
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW); 
  //LED C
  digitalWrite(6, LOW); 
  digitalWrite(8, LOW);
  
  delay(1000);
  //amarelo LED A e D  
  //LED A
  digitalWrite(1, LOW); 
  digitalWrite(2, LOW); 
  //LED D
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW);
  //
  //amarelo LED B e C
  //LED B
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  //LED C
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH); 
  
  //vermelho
  digitalWrite(1, HIGH);
  digitalWrite(9, HIGH);
  
  digitalWrite(3, LOW); 
  digitalWrite(6, LOW);
  delay(3500); 
  digitalWrite(1, LOW); 
  digitalWrite(9, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  
  
  //------------------------------------------------------------------------------
  
  
  //LED B 
  //3 = VERMELHO / 4 = VERDE / AZUL=5
  
  //LED C 
  //6 = VERMELHO / 7 = AZUL / 8 = VERDE
  

  
}


