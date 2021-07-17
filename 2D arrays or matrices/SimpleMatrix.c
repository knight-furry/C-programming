#include<stdio.h>
void main()
{
	int a[3][3],m,n,i,j;
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

}
