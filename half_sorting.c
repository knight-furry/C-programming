#include<stdio.h>

int main()
{
	int arr[10],n,i,j,temp1,count;
	printf("Enter the size of array:");
	scanf("%d",&n);
	count=n/2;
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Given array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nsorted even array is:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i < count)
			{
				if(arr[i]>arr[j])
				{
					temp1=arr[i];
					arr[i]=arr[j];
					arr[j]=temp1;
				}
			}
			else
			{
				if(arr[i] <= arr[j])
				{
					temp1=arr[i];
					arr[i]=arr[j];
					arr[j]=temp1;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
