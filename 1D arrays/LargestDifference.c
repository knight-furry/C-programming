#include<stdio.h>
void main()
{
	int a[10],i,j,n,temp;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter an elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The array is:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
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
	printf("\nNumbers are :%d & %d",a[n-1],a[0]);
	printf("\nThe lagest differance between two no is:%d\n",a[n-1]-a[0]);
}
