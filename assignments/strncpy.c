#include<stdio.h>
void strncpy1(char s1[], char s2[], int n);
int main()
{
	int n;
	printf("enter size\n");
	scanf("%d",&n);
	char s1[n];
	char s2[n];
	printf("enter the strings\n");
	scanf("%s%s",s1,s2);
	strncpy1(s1,s2,n);
	printf("%s",s1);
}
void strncpy1(char s1[],char s2[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		s1[i]=s2[i];
	}
}

