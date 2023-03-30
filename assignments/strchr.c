#include<stdio.h>
int strchr1(char s[], char c);
int main()
{
	int x;
	char c;
	char s[10];
	printf("enter string\n");
	scanf("%s",s);
	printf("enter a character\n");
	scanf(" %c",&c);
	x=strchr1(s,c);
	printf("%d",x);
}
int strchr1(char s[], char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
			return i;
}
}
