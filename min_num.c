#include<stdio.h>

void main()
{
	int i,n,min,a[20];
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the alements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Given array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>100)
		min=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		return ;
		if(a[i]>100 && min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nThe minimum value which is greater than 100 is :%d\n\n",min);
}
