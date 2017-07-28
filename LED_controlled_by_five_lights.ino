


LED Controlled with 5 Lights:
void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);
while (!Serial);
Serial.println("Input 1 to Turn LED 13 on and 2 to LED 13 off");
Serial.println("Input 3 to Turn LED 12 on and 4 to LED 12 off");
Serial.println("Input 5 to Turn LED 11 on and 6 to LED 11 off");
Serial.println("Input 7 to Turn LED 10 on and 8 to LED 10 off");
Serial.println("Input 9 to Turn ALL LEDs on and 0 to ALL LEDs off");
}

void loop(){
 if (Serial.available() > 0) {
   int incomingByte = Serial.read();
   if (incomingByte == '1') {
     digitalWrite(13, HIGH);
   } 
   
   if (incomingByte == '2') {
     digitalWrite(13, LOW);
   }  
   
   if (incomingByte == '3') {
     digitalWrite(12, HIGH);
   } 
   
   if (incomingByte == '4') {
     digitalWrite(12, LOW);
   }

   if (incomingByte =='5'){
     digitalWrite(11, HIGH);       
   }
   
   if (incomingByte == '6') {
     digitalWrite(11, LOW);
   }
    
   if (incomingByte == '7') {
     digitalWrite(10, HIGH);   
   }
  
   if (incomingByte =='8') {
     digitalWrite(10, LOW);
   }      
  
   
   if (incomingByte =='0') {
     digitalWrite(13, LOW); 
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);   
   }
   if (incomingByte =='9') {
     digitalWrite(13, HIGH); 
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
     digitalWrite(10, HIGH);   
   }
}
}

