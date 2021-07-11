#include<stdio.h>
void main()
{
	//bubble sort
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
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");

}
