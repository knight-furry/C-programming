#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i, n, j, k, m;
	char ***ptr = NULL;
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d", &m, &n);
	ptr = (char***)malloc(m * sizeof(char**));
	for(i = 0; i < n; i++)
	{
		*(ptr+i) = (char**)malloc(sizeof(char*));
	}
	printf("Enter the strings:\n\n");
	scanf(" ");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			*(*(ptr+i)+j) = (char*)malloc(sizeof(char));
			k = 0;
			while(1)
			{
				scanf("%c", (*(*(ptr+i)+j)+k));
				if(*(*(*(ptr+i)+j)+k) == '\0'|| *(*(*(ptr+i)+j)+k) == '\n')
				break;
				k++;
			}
		}
	}

	printf("The matrix of strings:\n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			k = 0;
			while(*(*(*(ptr+i)+j)+k) != '\n')
			{
				printf("%c", *(*(*(ptr+i)+j)+k));
				k++;
			}
			printf("\t\t");
		}
		printf("\n");
	}
	printf("\n\n");
}