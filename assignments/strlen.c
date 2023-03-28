#include<stdio.h>
int strlen1(char s[]);
int main()
{
char s[10];
int l;
printf("enter the string\n");
scanf("%s",s);
l=strlen1(s);

	printf("length of string is %d",l);
}
int strlen1(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
	i++;
	}
	return i;
}
