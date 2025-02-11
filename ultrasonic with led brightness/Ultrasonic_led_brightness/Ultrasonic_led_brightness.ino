// C++ code
//
int distance = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);

  distance = 0;
}

void loop()
{

  
  distance = 0.01723 * readUltrasonicDistance(5, 6);
  analogWrite(3, distance);
  Serial.println(distance);
  delay(100); // Delay a little bit to improve simulation performance

  if (distance>40){

  }

}