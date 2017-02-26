//www.elegoo.com
//2016.09.23
//#include <PinDef.h>
//#include <MotorDriver.h>
const int ABS=100;
extern int LTM1, LTM2, LTM3;

void setup() 
{
  Serial.begin(9600);
}

void loop() {
/*  int num1,num2,num3;
  num1=digitalRead(LTM1);    
  num2=digitalRead(LTM2);
  num3=digitalRead(LTM3); 
   if((num1==0)&&(num2==1)&&(num3==1)) 
   {
  */  _mleft();          //The sensor detected that right car turn left immediately when it meets black line 
/*    delay(0);
    while(LTM1){
    num2=digitalRead(LTM2);         //Cycle to judge degree of intermediate sensor,
    if(num2==1)
    {  _mleft();                     //If num2==1 does not go to the middle position, continue to turn left.
     delay(0);}
     else
     break;                      //Detection of num2==0 instructions turned over, out of the loop, detection of three sensors’ statusand then make appropriate action
   }                                       //The following and so on
   }    

  else if((num2==1)&&(num1==1)&&(num3==0))
   {
    _mright();
    delay(0);
    while(!LTM1)
    {
     num2=digitalRead(LTM2);
    if(num2==0){
      _mright();  
     delay(0);}
     else
      break;
    }
   }
  else
  {
    _mForward(); 
    delay(0);
  } */
}

