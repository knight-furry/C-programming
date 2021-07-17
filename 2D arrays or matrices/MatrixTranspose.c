#include<stdio.h>
void main()
{
	int a[3][3],m,n,i,j,k,m1,n1,b[3][3];
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("The matrix a is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	
	printf("Transpose is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		b[j][i]=a[i][j];
	}
	m1=n;
	n1=m;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	

}
