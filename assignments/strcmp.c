#include<stdio.h>
int strcmp1(char s1[], char s2[]);
int main()
{
	int x;
char s1[10];
char s2[10];
printf("enter the strings\n");
scanf("%s%s",s1,s2);
x=strcmp1(s1,s2);
printf("%d",x);
}
int strcmp1(char s1[], char s2[])
{
int i;
for(i=0;s1[i]!=0&&s2[i]!=0;i++)
{
if(s1[i]>s2[i])
	return 1;
if(s1[i]<s2[i])
	return -1;
}
if(s1[i]!=0&&s2[i]==0)
	return 1;
if(s1[i]==0&&s2[i]!=0)
	return -1;
if(s1[i]==0&&s2[i]==0)
	return 0;
}
