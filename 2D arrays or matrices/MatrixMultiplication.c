#include<stdio.h>
void main()
{
	int a[3][3],m,n,i,j,k,m1,n1,b[3][3],c[3][3];
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("enter size of matrix b (m*n):\n");
	scanf("%d%d",&m1,&n1);
	printf("enter the elements:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		scanf("%d",&b[i][j]);
	}

	printf("The matrix a is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}

	printf("The matrix b is:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
		
	if(n==m1)
	{
		printf("Multiplication is:\n");
		for(i=0;i<m;i++)
		{	for(j=0;j<n1;j++)
			{
				c[i][j]=0;
				for(k=0;k<m1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			printf("%d\t",c[i][j]);
			printf("\n");
		}
	}
	else
	printf("Multiplication can not be posible......\n");
}

