#include<stdio.h>
void main()
{
	int a[3][3],m,n,i,j,k,m1,n1,b[3][3],flag=0,f=0;
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	
	printf("The matrix a is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				f++;
			}
			else
			{
				if(a[i][j]!=a[j][i])
				flag++;
			}
		}
	}
		if(f==0 && flag==0)
		printf("The given matrix is symetric matrix....\n");
		else
		printf("The given matrix is not symetric matrix.....\n");
	}
	else
	printf("Matrix does not having symetric matrix.......\n");
}
