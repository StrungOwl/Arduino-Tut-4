
//This comment is much better


//#include <Servo.h>

//Servo myservo;

//int pos = 0; 

const int trigPin = 11;
const int echoPin = 12;
// defines variables
long duration;
int distance;

void setup() {
  //myservo.attach(13);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
 
  Serial.println(distance);

//  //SERVO STUFF HERE---------------------------
//
//    if(distance <= 25){
//    myservo.write(180);              // tell servo to go to position in variable 'pos'
//    } else {
//      myservo.write(0);
//    }
//    
}
