#include<stdio.h>
void main()
{
	int a[10],b[10],i,j,n,temp,m,c[20],k;
	printf("Enter the size of array a:\n");
	scanf("%d",&n);
	printf("Enter an elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the size of array b:\n");
	scanf("%d",&m);
	printf("Enter an elements:\n");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	
	printf("The Union of two array is:\n");
	i=0;j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if(b[j]<a[i])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
			i++;
		}
	}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<m)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	c[k]='\0';
	k=0;
	while(c[k]!='\0')
	{
		printf("%d\t",c[k]);
		k++;
	}
	printf("\n");
}
