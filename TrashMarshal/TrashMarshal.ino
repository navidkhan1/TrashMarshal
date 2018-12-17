#include <Servo.h>

bool beltStatus = false;

int metalSensorPin = 2;
int plasticSensorPin = 4;
int paperSensorPin = 7;

Servo belt;
int beltState = 110;

Servo arm1;
int arm1pos = 45; 


Servo arm2;
int arm2pos = 45;


Servo arm3;
int arm3pos = 45;


void setup() 
{
  Serial.begin(9600);

  pinMode(metalSensorPin, INPUT);
  pinMode(plasticSensorPin, INPUT);
  pinMode(paperSensorPin, INPUT);
  
  
  belt.attach(6);
  beltOFF();
  
  arm1.attach(9);
  arm1.write(arm1pos);
  
  arm2.attach(10);
  arm2.write(arm2pos);
  
  arm3.attach(11);
  arm3.write(arm3pos);


  

}

void loop() 
{
   bool isMetal = false;
   bool isPlastic = false;
   bool isPaper = false;
  
  int metal = digitalRead(metalSensorPin);
  Serial.println(metal);
  delay(1);

  int plastic = digitalRead(plasticSensorPin);
  Serial.println(plastic);
  delay(1);
  
  int paper = digitalRead(paperSensorPin);
  Serial.println(paper);
  delay(1);

 /* 
  if(value1 ==1)
    {
      beltON();
      delay(1);
    }
  else if( value1 ==0 && isMetal == true)
    {
      beltOFF();
      arm1push();
      
    }
  */
  
  int type = Serial.read();
  

  switch (type) {
    case 1:
      isMetal = true;
      if(isMetal == true && metal == 0)
        { 
          beltOFF();
          arm1push();
        }  
      break;
      
    case 2:
      isPlastic = true;
      if(isPlastic == true && plastic == 0)
        { 
          beltOFF();
          arm2push();
        }  
      break;
      
    case 3:
      isPaper = true;
      if(isPaper == true && paper == 0)
        { 
          beltOFF();
          arm3push();
        }    
      break;
  }

}
