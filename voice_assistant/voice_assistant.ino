int incomingByte;      // a variable to read incoming serial data into

void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  //pinMode(, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == '0') {
      digitalWrite(7, HIGH);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '1') {
      digitalWrite(7, LOW);
    }

    if (incomingByte == '2') {
      digitalWrite(6, HIGH);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '3') {
      digitalWrite(6, LOW);
    }

    if (incomingByte == '4') {
      digitalWrite(5, HIGH);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '5') {
      digitalWrite(5, LOW);
    }
    if(incomingByte =='6')
    {
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
    }
    if(incomingByte =='7')
    {
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
    }
    




    
  }
}
