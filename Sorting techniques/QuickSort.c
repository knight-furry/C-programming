#include<stdio.h>

void quicksort(int a[],int l,int h)
{
	int key,high,low,temp;
	high=h;
	low=l+1;
	key=a[l];
	while(low <= high)
	{
		while(a[low] < key)
		{
			low++;
		}
		
		while(a[high] >  key)
		{
			high--;
		}
		
		if(low <= high)
		{
			temp=a[high];
			a[high]=a[low];
			a[low]=temp;
			high--;
			low++;
		}
	}
	
	temp=a[l];
	a[l]=a[high];
	a[high]=temp;
	
	if(l < high)
	{
		quicksort(a,l,high-1);
	}
	
	if(h > low)
	{
		quicksort(a,low,h);
	}
}

void main()
{
	int a[100];
	int i,j,size,temp,chioce;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements successfull.....!\n");
	printf("\nThe given array is:\n");
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
	
	quicksort(a,0,size-1);
	printf("\nThe sorted array is:\n");
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
	printf("\n");
}
