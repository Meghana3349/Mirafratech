#include<stdio.h>
void strcat1(char s[], char d[]);
int main()
{
char s[50];
char d[50];
printf("enter the source string\n");
scanf("%s",s);
printf("enter the destination string\n");
scanf("%s",d);
strcat1(s,d);
printf("%s",d);
}

void strcat1(char s[], char d[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	{
		for(j=0;s[j]!=0;j++,i++)
		{
			d[i]=s[j];
		}
		d[i]=0;
	}
}

