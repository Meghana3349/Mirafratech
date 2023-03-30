#include<stdio.h>
int strrchr1(char s[], char c);
int main()
{
	
	
	char s[10],c;
	int x;

	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the character\n");
	scanf(" %c",&c);
	x=strrchr1(s,c);
	printf("%d",x);
}
int strrchr1(char s[], char c)
{
	int i;
	for(i=0;s[i]!=0;i++);
		for(;i>=0;i--)
	{
		if(s[i]==c)
	return i;
	}
}

