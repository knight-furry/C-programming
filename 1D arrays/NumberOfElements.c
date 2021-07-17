#include<stdio.h>
void main()
{
	int a[10],i,j,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter an elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The array is:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	printf("\nThe no of elements are:%d\n",i);
}
