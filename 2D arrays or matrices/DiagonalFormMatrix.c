
#include<stdio.h>
void main()
{
	int m,n,i,j,k,a[10][10];
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}

	printf("The matrix a is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Required output is:\n");

	for(i=0;i<=m-1;i++)
	{
		k=i;
		j=0;
		while(k>=0)
		{
			printf("%d\t",a[k][j]);
			k=k-1;
			j=j+1;
		}
	}

	for(i=1;i<=n-1;i++)
	{
		k=m-1;
		j=i;
		while(j<=n-1)
		{
			printf("%d\t",a[k][j]);
			j=j+1;
			k=k-1;
		}
	}
		printf("\nThank you.......!\n");
}
