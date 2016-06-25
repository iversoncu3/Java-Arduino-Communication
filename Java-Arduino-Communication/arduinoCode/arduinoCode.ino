int i=0 ;
void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
 
void loop() 
{ 
 
     
  i= Serial.read();
   if(i==1){
   digitalWrite(13,HIGH);
   }
   else if(i==2){
   digitalWrite(13,LOW);
   }
   
}
