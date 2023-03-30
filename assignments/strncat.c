#include<stdio.h>
void strncat1(char s[], char d[],int n);
int main()
{
	int n;
	printf("enter the size\n");
	scanf("%d",&n);
	char s[10];
	char d[10];
	printf("enter the source string\n");
	scanf("%s",s);
	printf("enter the destination string\n");
	scanf("%s",d);
	strncat1(s,d,n);
	printf("%s",d);
}
void strncat1(char s[], char d[], int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++)
	{
		}
		for(j=0;s[j]!=0&&j<n;j++,i++)
		{
	d[i]=s[j];
		}
}

