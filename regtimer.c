#include<pic.h>
unsigned char count;
void main()
{
TRISC=0;
OPTION=0X07;
while(1)
{
	if(T0IF==1)
	{
	T0IF=0;
	count++;
		if(count==15)
		{
		count=0;
		if(RC0==1)
		RC0=0;
		else
		RC0=1;
		}
	}
}
}