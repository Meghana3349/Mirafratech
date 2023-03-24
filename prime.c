#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	if(n%i==0)
		count++;
	}
	if(count==0)
		{
		printf("%d is prime\n",n);
		}
		else
		{
			printf("%d is not prime\n",n);
		}
	}
