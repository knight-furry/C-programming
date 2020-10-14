#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return (n*fact(n-1));
}
void main()
{
	int x,num,sum=0,rem;
	printf("Enter any number:\n");
	scanf("%d",&x);
	num=x;
	while(num != 0)
	{
		rem=num%10;
		sum=sum+fact(rem);
		num=num/10;
	}
	if(sum==x)
	printf("The given number is strong number....!\n\n");
	else
	printf("The given number is NOT strong number....!\n\n");
}
