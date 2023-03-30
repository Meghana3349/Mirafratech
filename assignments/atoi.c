#include<stdio.h>
int atoi1(char s[]);
int main()
{
	int x;
	char s[10];
	printf("enter the string\n");
	scanf("%s",s);
	x=atoi1(s);
	printf("%d",x);
}
int atoi1(char s[])
{
	int i,sum=0;
	for(i=0;s[i]!=0;i++)
	{
	sum=sum*10;
	sum=sum+s[i]-48;
	}
	return sum;
}
