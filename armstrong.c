#include<stdio.h>
void main()
{
	int p,n,count=0,i,s,c=0,rem;
	printf("Enter any number:");
	scanf("%d",&n);
	p=s=n;
	while(p != 0)
	{
		p=p/10;
		count++;
	}
	
	while(n != 0)
	{
		int sum=1;
		rem=n%10;
		for(i=0;i<count;i++)
		{
			sum=sum*rem;
		}
		c=c+sum;
		n=n/10;
	}
	
	if(s==c)
	printf("\nThe number is Armstrong number....!\n ");
	else
	printf("\nThe number is not Armstrong number....!\n");
}
