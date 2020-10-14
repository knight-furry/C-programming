#include<stdio.h>

void selection(int *a,int size)
{
	int i,j,temp;
	
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}

void search(int a[],int low,int high,int key)
{
	int flag=0,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			flag=1;
			printf("Element is found succcessfully...!\n");
			break;
		}
		else
		if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==0)
	printf("Element not found......!\n");
}

void main()
{
	int a[10],i,n,key,s;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the element in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nThe given array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	selection(a,n);
	printf("\nEnter the search element:\n");
	scanf("%d",&key);
	
	search(a,0,n-1,key);
	
}
