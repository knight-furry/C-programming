#include<stdio.h>

void main()
{
	int arr[10],n,i,j,temp1,temp2;
	printf("Enter the size of array:");
	scanf("%d",&n);
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
			if(arr[i]%2==0 && arr[j]%2==0)
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
				continue;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
