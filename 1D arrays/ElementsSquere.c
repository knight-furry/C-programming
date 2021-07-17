#include<stdio.h>
void main()
{
	int a[10],i,j,n,temp;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter an elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	printf("\nThe array of squares is:\n");
	for(i=0;i<n;i++)
	{
		j=a[i];
		a[i]=j*j;
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
}

