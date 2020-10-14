#include<stdio.h>
#include<stdlib.h>

char* fun()
{
	int i=0;
//	printf("\nEnter any string:\n");
	char *p = NULL;
	p = (char *)malloc(sizeof(char));
	while(1)
	{
		scanf("%c", p+i);
		if(*(p+i) == '\n')
		break;
		i++;
	}
	return p;
}

void main()
{
	int i,j,k;
	char ***p=NULL;
	
	p=(char***)malloc(3* sizeof(char**));
	
	for(i=0;i<3;i++)
	{
		*(p+i)=(char**)malloc(3* sizeof(char*));
	}
		
	printf("Enter string in matrix of (3*3):\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(p+i)+j)=fun();
		}	
	}
	
/*	printf("Enter string in matrix of (3*3):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			fgets(*(*(p+i)+j),sizeof(*(*(p+i)+j)),stdin);
		}		
	}
*/	
	printf("\nThe matrix is:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			k=0;
			while(*(*(*(p+i)+j)+k) != '\n')
			{
				printf("%c",*(*(*(p+i)+j)+k));
				k++;
			}
			printf("\t\t");
		}
		printf("\n");
	}
	printf("\n\n");
}
