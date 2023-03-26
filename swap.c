#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("before swapping:%d %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping:%d %d\n",a,b);
}
