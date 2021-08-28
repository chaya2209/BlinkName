/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   //My name is CHAYA. 
  //The Morse Code for C is -.-.
  //The Morse Code for H is ....
  //The Morse Code for A is .-
  //The Morse code for Y is -.--
  //The Morse code for A is .-
  //delay of 1000 represents 1 unit whereas the delay of 3000 represents 3 units.
  //The delay for dot is 1000. The delay for dash is 3000. The delay between the parts of the same letter is 1000(between dash and dot(vice-versa) or between dot and dot or between dash and dash). 
  //The delay between the characters of a word is 3000.

  //For C
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW); 

  delay(3000);

  //For H
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(3000);
  
  //For A
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(3000);

  //For Y
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(3000);

  //For A
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW); 

  delay(3000);            
  
}
