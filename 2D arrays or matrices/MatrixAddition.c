#include<stdio.h>
void main()
{
	int a[3][3],m,n,i,j,m1,n1,b[3][3];
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}

	printf("enter size of matrix b (m*n):\n");
	scanf("%d%d",&m1,&n1);
	printf("enter the elements:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		scanf("%d",&b[i][j]);
	}
	printf("The matrix b is:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
		
	if(m==m1 && n==n1)
	{
		printf("Addition is:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			printf("%d\t",a[i][j]+b[i][j]);
			printf("\n");
		}
	}
	else
	printf("Addition can not be posible\n");
}
