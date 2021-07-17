#include<stdio.h>
void main()
{
	int a[10],i,j,n,temp,m1,m2;
	printf("Enter the size of array a:\n");
	scanf("%d",&n);
	printf("Enter an elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	m1=m2=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<m1)
		{
			m2=m1;
			m1=a[i];
		}
	}
	
	printf("The second minimum element in array is:%d\n",m2);
}
