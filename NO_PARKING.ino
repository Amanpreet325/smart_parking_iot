const int trigPin = D5;   
 const int echoPin = D6;
 const int trigPin1 = D1;   
 const int echoPin1 = D2;
 #define LED D3
  // trig D2 eco d1
 long duration;  
 float distance;  
 void setup() {
  
 pinMode(LED, OUTPUT);  
 pinMode(trigPin,OUTPUT); // Sets the trigPin as an Output  
 pinMode(echoPin,INPUT); 
  pinMode(trigPin1,OUTPUT); // Sets the trigPin as an Output  
 pinMode(echoPin1,INPUT);// Sets the echoPin as an Input  
 Serial.begin(115200); // Starts the serial communication  
 }  
 void loop() {  
 // Clears the trigPin  
distance=dis(trigPin,echoPin);
 if(distance<=10)
 {
    digitalWrite(LED,HIGH);
 }
 else
 {
    distance=dis(trigPin1,echoPin1);
    if(distance<=10)
    {
     digitalWrite(LED,HIGH);
    }
    else
    {
      digitalWrite(LED,LOW); 
    }
 }    
 delay(2000);  
 }
 float dis(int trigPin,int echoPin)
 {
   digitalWrite(trigPin, LOW);  
 delayMicroseconds(10);  
 // Sets the trigPin on HIGH state for 10 micro seconds  
 digitalWrite(trigPin, HIGH);  
 delayMicroseconds(10);  
 digitalWrite(trigPin, LOW);  
 // Reads the echoPin, returns the sound wave travel time in microseconds  
 duration = pulseIn(echoPin, HIGH);  
 // Calculating the distance  
 distance= duration*0.034/2;  
 // Prints the distance on the Serial Monitor  
 Serial.print("Distance: ");  
 Serial.println(distance);
 }
