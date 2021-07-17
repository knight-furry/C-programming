#include<stdio.h>
void main()
{
	int a[3][3],m,n,i=0,j=0,k,fr=0,fc=0;
	int lr,lc;
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
	lr=m-1;
	lc=n-1;
	while(fr<=lr && fc<=lc)
	{
		for(i=fc;i<=lc;i++)
		{
	    		printf("%d\t",a[fr][i]);
		}
		fr++;

		for(i=fr;i<=lr;i++)
		{
			printf("%d\t",a[i][lc]);
		}
		lc--;


		for(i=lc;i<=fc;i++)
		{
			printf("%d\t",a[lr][i]);
		}
		lr--;
		
	
		for(i=fr;i<=lr;i++)
		{
			printf("%d\t",a[i][fc]);
		}
		fc++;
	
	
	}
}
