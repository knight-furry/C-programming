#include<stdio.h>
void main()
{
	//Insertion sort
	int a[10],i,j,n,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter a array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The general array is:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	printf("\nThe sorted array is:");
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");

}
