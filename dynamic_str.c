#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0;
	printf("\nEnter any string:\n");
	char *p = NULL;
	p = (char *)malloc(sizeof(char));
	while(1)
	{
		scanf("%c", p+i);
		if(*(p+i) == '\n')
		break;
		i++;
	}
	printf("The given string is:\n");
	i=0;
	while(*(p+i) != '\n')
	{
		printf("%c", *(p+i));
		i++;
	}
	printf("\n\n");
}
