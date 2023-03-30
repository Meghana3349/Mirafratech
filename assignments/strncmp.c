#include<stdio.h>
int strncmp1(char s1[], char s2[],int n);
int main()
{
	int n,x;
	printf("enter size\n");
	scanf("%d",&n);
	char s1[n];
	char s2[n];
	printf("enter the strings\n");
	scanf("%s%s",s1,s2);
	x=strncmp1(s1,s2,n);
	if(x>0)
	printf("string 1 is greater than string 2\n");
	if(x<0)
	printf("string 2 is greater than string 1\n");
	if(x==0)
	printf("both strings are equal\n");
}
int strncmp1(char s1[], char s2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
		if(s1[i]==s2[i])
			return 0;
		if(s1[i]!=0&&s2[i]==0)
			return -1;
		if(s1[i]==0&&s2[i]!=0)
			return 1;
	}
}
