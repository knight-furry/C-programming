#include<stdio.h>
void main()
{
	int m,n,i,j;
	printf("\nEnter the range from m to n:\n");
	scanf("%d%d",&m,&n);
	printf("The prime numbers between that range are:\n");
	if(m<n)
	{
		for(i=m;i<=n;i++)
		{
			int count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==2)
			printf("%d\t",i);
		}
		printf("\n");
	}
	else
	{
		
		for(i=n;i<=m;i++)
		{
			int count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==2)
			printf("%d\t",i);
		}
		printf("\n");
	}
}
