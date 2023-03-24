#include<stdio.h>
int a=10;
static int b=11;
extern int c=12;
//register int d=13;
int main()
{
	int x=14;
	static int y=15;
	//extern int p=16;
	register int z=17;
	//a+=70;
	//b+=100;
	//c+=50;
	//a--;
	//b--;
	//c--;
	a=c*10;
	b=a*15;
	x+=10;
	y+=20;
        z+=30;
	printf("%d %d %d %d %d %d",a,b,c,x,y,z);
}



