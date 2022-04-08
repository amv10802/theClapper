int SoundSensor=A0; 
int LED=3; // LED connected to pin 3
boolean LEDStatus=false;

void setup() {
 pinMode(SoundSensor,INPUT);
 pinMode(LED,OUTPUT); 
 Serial.begin(9600); //initialize serial
 
}
void loop() {
 int SensorData=analogRead(SoundSensor); 
  Serial.println(SensorData);//print the value
   if(SensorData>575){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else if(LEDStatus==true){
        LEDStatus=false;
        digitalWrite(LED,LOW);
}}}
