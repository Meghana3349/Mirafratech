#include<stdio.h>
int x=10;
static int y=15;
extern int a=11;
//register int b=9;
int main()
{
	int m=12;
	static int z=13;
       // extern int a=8;
	register int d=7;
	printf("%d %d %d %d %d %d",x,y,a,m,z,d);
}


