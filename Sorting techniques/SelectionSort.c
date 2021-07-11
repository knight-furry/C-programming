#include<stdio.h>
void main()
{
	//Selection sort
	int a[10],i,j,n,temp,i_min;
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
		i_min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i_min])
			i_min=j;
		}
		temp=a[i];
		a[i]=a[i_min];
		a[i_min]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");

}
