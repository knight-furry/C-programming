#include<stdio.h>
int main()
{
	int x=0,y=0;
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	
	for(x= (size/2) ; x <= size ; x=x+2)
	{
		for(y=1;y<(size-x);y=y+2)
		{
			printf(" ");
		}
		for(y=1;y<=x;y++)
		{
			printf("*");
		}
		for(y=1;y<(size-x);y=y+1)
		{
			printf(" ");
		}
		for(y=1;y<=x;y++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(x=size;x>=1;x--)
	{
		for(y=x;y<size;y++)
		{
			printf(" ");
		}
		for(y=1; y<= (2*x)-1;y++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
