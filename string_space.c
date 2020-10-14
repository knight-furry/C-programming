#include<stdio.h>
void main()
{
	char name[50];
	int i=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	printf("Given string is:\n");
	while(name[i] != '\0')
	{
		printf("%c",name[i++]);
	}
	printf("\nThe updated string is:\n");
	i=0;
	while(name[i] == ' ')
	i++;
	while(name[i] != '\0')
	{
		if(name[i] ==' ' )
		{
			if(name[i+1]== ' ')
			{
				i++;
				continue;
			}
		}
			printf("%c",name[i++]);	
	}
}
