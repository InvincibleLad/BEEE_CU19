int echo = 3;
int trig = 4;
int led = 12;
void setup()
{ pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop()
{ digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 unsigned long duration = pulseIn(echo, HIGH);
 int distance = (duration/2)/29.2;
  Serial.println(distance);
  if(distance < 50)
  { 
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
  }
}