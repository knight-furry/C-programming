#include<stdio.h>
void main()
struct max
{
	char name[20];
};
{
	int m,n,i,j,b,k=0,a[10][10];
	struct max s[5];
	printf("enter size of matrix (m*n):\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("a[%d][%d]=",i,j);
			scanf("%s",&s[k].name);
			k++;
		}
		
	}
	printf("\n\nThe matrix a is:\n");
	k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b=0;
			while(s[k].name[b]!='\0')
			{
				printf("%c",s[k].name[b]);
				b++;
			}
				k++;
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");
}
