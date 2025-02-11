// C++ code
//
//int time_for_cycle = 0;


//int sound_speed = 0;

void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  int i=0;

  while (i<10){
    analogWrite(5, i);
    i++;
    delay(100);

  }

  while (i>0){
    analogWrite(5, i);
    i--;
    delay(100);  
  }
}
  // digitalWrite(5, HIGH);
  // delay(500); // Delay a little bit to improve simulation performance
  // digitalWrite(5, LOW);
  // delay(500);

