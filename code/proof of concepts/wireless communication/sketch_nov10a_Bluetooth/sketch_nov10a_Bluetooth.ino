int LED = 13;
int LED2 = 2;
char state;


void setup ()
{
  pinMode (LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  //Serial1.begin (9600);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    state = Serial.read();
  }  

  if (state == '1')
    {
      digitalWrite(LED,HIGH);
      digitalWrite(LED2,HIGH);
      Serial.println("Led aan");
    }
  else if (state == '0')
  {
    digitalWrite(LED,LOW);
    digitalWrite(LED2,LOW);
    Serial.println("Led uit");
  }

  //Serial.println(state);
  delay(100);
}