int In1 = 4;//Pin no 7 of the arduino connects with motor driver's In1 pin//

int In2 = 7;//Pin no 8 of the arduino connects with motor driver's In2 pin//


int ENA = 3;//Pin no 3 of the arduino connects with motor driver's ENA pin//


int ENB = 9;//Pin no 9 of the arduino connects with motor driver's ENB pin//


int In3 = 8;//Pin no 8 of the arduino connects with motor driver's In3 pin//


int In4 = 12;//Pin no 12 of the arduino connects with motor driver's In4 pin//


int SPEED = 50;//initialize the speed of the motor//

void setup()
{
  /*
   *Here I initialize all the input pins of the L298N for taking the output signal of arduino by this in built pinMode function
   */
  pinMode(In1,OUTPUT);
  
  pinMode(In2,OUTPUT);
  
  pinMode(In3,OUTPUT);
  
  pinMode(In4,OUTPUT);
  
  pinMode(ENA,OUTPUT);
  
  pinMode(ENB,OUTPUT);
  
  digitalWrite(In1,HIGH);// To change the direction of the motor by type low instead of High"//
  
  digitalWrite(In2,LOW);
  
  digitalWrite(In3,LOW);// To change the direction of the motor by type low instead of High"//
  
  digitalWrite(In4,HIGH);
  
  analogWrite(ENA,SPEED);//ENA of the motor controller connects with pwm pin 3 of arduino,its change the speed of the motor//
  
  analogWrite(ENB,SPEED);//ENA of the motor controller connects with pwm pin 3 of arduino,its change the speed of the motor//
  

 
}
void loop()
{


}
