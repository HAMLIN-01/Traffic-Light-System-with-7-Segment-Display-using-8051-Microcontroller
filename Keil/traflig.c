#include<regx52.h>
#define LIGHTS P1
#define SEGMENT P2
void delay(unsigned int);
void display(unsigned char);
void redandgreen();
void yellow();
void main()
{
while(1)
{
redandgreen();
yellow();
}}
void redandgreen()
{
unsigned char i;
P1=0x01;
for(i=0;i<10;i++)
{
display(i);
delay(1000);
}
P1=0x02;
for(i=0;i<10;i++)
{
display(i);
delay(1000);
}}
void yellow()
{
unsigned char i;
P1=0x04;
for(i=1;i<6;i++)
{
display(i);
delay(1000);
}}
void delay(unsigned int a)
{
unsigned char i;
for(;a>0;a--)
{
for(i=250;i>0;i--);
}}
void display(unsigned char num)
{
switch(num)
{
	case 1:SEGMENT=0x06;
	break;
	case 2:SEGMENT=0x5B;
	break;
	case 3:SEGMENT=0x4F;
	break;
	case 4:SEGMENT=0x66;
	break;
	case 5:SEGMENT=0x6D;
	break;
	case 6:SEGMENT=0x7D;
	break;
	case 7:SEGMENT=0x07;
	break;
	case 8:SEGMENT=0x7F;
	break;
	case 9:SEGMENT=0x6F;
	break;
	case 10:SEGMENT=0x3F;
	break;
}}


