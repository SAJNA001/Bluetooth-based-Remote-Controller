char value = 0;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(2, OUTPUT);//Light1 pin
  pinMode(3, OUTPUT);//Light2 pin
  pinMode(12, OUTPUT);//Light3 pin
  pinMode(13, OUTPUT);//Light4 pin
  Serial.begin(9600);
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH); 
}

void loop()
{ 
  if(Serial.available() > 0)  
  {  
    value = Serial.read();      
    Serial.print(value);        
    Serial.print("\n");        
    if(value == '1') //Turn Light1 ON            
      digitalWrite(2, LOW);  
     if(value == '2') //Turn Light1 OFF      
      digitalWrite(2, HIGH); 
        
     if(value == '3') //Turn Light2 ON            
      digitalWrite(3, LOW);  
     if(value == '4') //Turn Light2 OFF      
      digitalWrite(3, HIGH);   
      
      if(value == '5') //Turn Light3 ON            
      digitalWrite(12, LOW);  
     if(value == '6') //Turn Light3 OFF      
      digitalWrite(12, HIGH);   
      
      if(value == '7') //Turn Light4 ON            
      digitalWrite(13, LOW);  
     if(value == '8') //Turn Light4 OFF      
      digitalWrite(13, HIGH);      
  }                            
} 
/*
void setup() 
{
  Serial.begin(9600);         
  pinMode(2, OUTPUT);//Light1 pin
  pinMode(3, OUTPUT);//Light2 pin
  pinMode(12, OUTPUT);//Light3 pin
  pinMode(13, OUTPUT);//Light4 pin
  Serial.begin(9600);
}

void loop()
{ 
  if(Serial.available() > 0)  
  {  
    value = Serial.read();      
    Serial.print(value);        
    Serial.print("\n");        
    if(value == '1') //Turn Light1 ON            
      digitalWrite(2, HIGH);  
     if(value == '2') //Turn Light1 OFF      
      digitalWrite(2, LOW); 
        
     if(value == '3') //Turn Light2 ON            
      digitalWrite(3, HIGH);  
     if(value == '4') //Turn Light2 OFF      
      digitalWrite(3, LOW);   
      
      if(value == '5') //Turn Light3 ON            
      digitalWrite(12, HIGH);  
     if(value == '6') //Turn Light3 OFF      
      digitalWrite(12, LOW);   
      
      if(value == '7') //Turn Light4 ON            
      digitalWrite(13, HIGH);  
     if(value == '8') //Turn Light4 OFF      
      digitalWrite(13, LOW);      
  }                            
} 
*/
