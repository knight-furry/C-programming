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

int search(int a[],int low,int high,int key)
{
	int mid,flag=0;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			return 1;
		}
		else
		if(key<a[mid])
		{
			flag=search(a,low,mid-1,key);
		}
		else
		{
			flag=search(a,mid+1,high,key);
		}
		
	}
	return flag;
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
	
	s=search(a,0,n-1,key);
	if(s==1)
	printf("Element is found.....!\n");
	else
	printf("Element not found.....!\n");
}
