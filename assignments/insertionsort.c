#include<stdio.h>
void insertion_sort(int arr[]);
int main()
{
	int n,i,j,temp=0;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		temp=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>temp)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}

		arr[i+1]=temp;

	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}	



