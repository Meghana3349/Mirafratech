#include<stdio.h>
int main()
{
	volatile int a=5,b=10;
	b=a*2+b;
	b=a/3-10;
	printf("value is %d",b);
}
