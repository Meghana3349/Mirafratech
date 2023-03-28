#include<stdio.h>
void strcpy1(char s2[],char s1[]);
int main()
{
char s1[10];
char s2[10];
printf("enter the strings\n");
scanf("%s %s",s1,s2);
strcpy1(s2,s1);
printf("after strcpy %s",s2);
}
void strcpy1(char s2[],char s1[])
{
	int i;
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]=0;
}

