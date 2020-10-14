#include<stdio.h>

void main()
{
	int num, rem, sum=0;
	printf("Enter any natural number: ");
	scanf("%d", &num);
	while(num != 0)
	{
		rem = num % 10;
		sum = rem + sum * 10;
		num = num / 10;
	}
	printf("The reverse number is: %d", sum);
	printf("\n");
}
