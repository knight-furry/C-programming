#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int b[10],i,j,k;
	i=low;
	j=mid+1;
	k=0;
	while(i<=mid && j<=high)
	{
		if(a[i] > a[j])
		{
			b[k]=a[j];
			k++;
			j++;
		}
		else
		{
			b[k]=a[i];
			k++;
			i++;
		}
	}
	
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	k=0;
	for(i=low;i<=high;i++)
	{
		a[i]=b[k];
		k++;
	}
}

void mergesort(int a[],int low,int high)
{
	int mid;
	if(low < high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		
		merge(a,low,mid,high);
	}
}

void main()
{
	int a[10],i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the element in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nThe given array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\nThe sorted array is:\n");
	
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
}
