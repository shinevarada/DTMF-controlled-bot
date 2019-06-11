
int L1=8;
int L2=9;
int R1=10;
int R2=11;
int Q1=4;
int Q2=5;
int Q3=6;
int Q4=7;
void setup()
{
pinMode(L1,OUTPUT);
pinMode(L2,OUTPUT);
pinMode(R1,OUTPUT);
pinMode(R2,OUTPUT);
pinMode(Q1,INPUT);
pinMode(Q2,INPUT);
pinMode(Q3,INPUT);
pinMode(Q4,INPUT);
Serial.begin(9600);
}
void loop()
{
if(digitalRead(Q1)==LOW && digitalRead(Q2)==HIGH && digitalRead(Q3)==LOW && digitalRead(Q4)==LOW)   //move forward
	{
	digitalWrite(L1,HIGH);
	digitalWrite(L2,LOW);
	digitalWrite(R1,HIGH);
	digitalWrite(R1,LOW);
	Serial.println("forward");
	}

else if(digitalRead(Q1)==LOW && digitalRead(Q2)==LOW && digitalRead(Q3)==LOW && digitalRead(Q4)==HIGH)   //move reverse
	{
	digitalWrite(L1,LOW);
	digitalWrite(L2,HIGH);
	digitalWrite(R1,LOW);
	digitalWrite(R1,HIGH);
	Serial.println("reverse");
	}
else if(digitalRead(Q1)==LOW && digitalRead(Q2)==HIGH && digitalRead(Q3)==HIGH && digitalRead(Q4)==LOW)   //move right
	{
	digitalWrite(L1,HIGH);
	digitalWrite(L2,LOW);
	digitalWrite(R1,LOW);
	digitalWrite(R1,LOW);
	Serial.println("right");
	}

else if(digitalRead(Q1)==LOW && digitalRead(Q2)==LOW && digitalRead(Q3)==HIGH && digitalRead(Q4)==LOW)   //move left
	{
	digitalWrite(L1,LOW);
	digitalWrite(L2,LOW);
	digitalWrite(R1,HIGH);
	digitalWrite(R1,LOW);
	Serial.println("left");
	}
else if(digitalRead(Q1)==HIGH && digitalRead(Q2)==LOW && digitalRead(Q3)==HIGH && digitalRead(Q4)==LOW)   //move stop
	{
	digitalWrite(L1,LOW);
	digitalWrite(L2,LOW);
	digitalWrite(R1,LOW);
	digitalWrite(R1,LOW);
	Serial.println("stop");
	}
}