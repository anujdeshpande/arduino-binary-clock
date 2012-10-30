int state_1=1 ,state_2=1 ,state_4=1 ,state_8=1 ,state_16=1,state_32=1 ;
int count=0 ;
int hour1=0 , hour2=0 ,hour3=0 , hour4=0 ;
int count2=0 ;
void setup()
{
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);

} ;
void loop()
{
if(count == 60 )
{
count = 0 ;
count2++;
if (count2==13)
{
count2=1 ;
}
//hour1
if (hour1==1)
{
hour1=0 ;
digitalWrite(7,LOW);
}
else
{
hour1=1 ;
digitalWrite(7,HIGH);
}
//hour2
if (count2%2==0)
{
if (hour2==1)
{
hour2=0 ;
digitalWrite(8,LOW);
}
else
{
hour2=1 ;
digitalWrite(8,HIGH);
}
}
//hour3
if (count2%4==0)
{
if (hour3==1)
{
hour3=0 ;
digitalWrite(9,LOW);
}
else
{
hour3=1 ;
digitalWrite(9,HIGH);
}
}

if (count2%8==0)
{
if (hour4==1)
{
hour4=0 ;
digitalWrite(10,LOW);
}
else
{
hour4=1 ;
digitalWrite(10,HIGH);
}
}
state_1=1 ;state_2=1 ;state_4=1 ;state_8=1 ;state_16=1;state_32=1;
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
}

//minutes

//toggle state_1
if (state_1==1)
{
state_1=0 ;
digitalWrite(1,LOW);
}
else
{
state_1=1 ;
digitalWrite(1,HIGH);
}

//toggle state_2
if (count%2==0)
{
if (state_2==1)
{
state_2=0 ;
digitalWrite(2,LOW);
}
else
{
state_2=1 ;
digitalWrite(2,HIGH);
}
}
//toggle state_4
if (count%4==0)
{
if (state_4==1)
{
state_4=0 ;
digitalWrite(3,LOW);
}
else
{
state_4=1 ;
digitalWrite(3,HIGH);
}
}
//toggle state_8
if (count%8==0)
{
if (state_8==1)
{
state_8=0 ;
digitalWrite(4,LOW);
}
else
{
state_8=1 ;
digitalWrite(4,HIGH);
}
}

//toggle state_16
if (count%16==0)
{
if (state_16==1)
{
state_16=0 ;
digitalWrite(5,LOW);
}
else
{
state_16=1 ;
digitalWrite(5,HIGH);
}
}

//toggle state_32
if (count%32==0)
{
if (state_32==1)
{
state_32=0 ;
digitalWrite(6,LOW);
}
else
{
state_32=1 ;
digitalWrite(6,HIGH);
}
}

delay(60000);
count++ ;
}
