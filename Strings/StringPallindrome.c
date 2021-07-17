#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i=0,n,flag=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	
	while(name[i]!='\0')
	{
		count++;
		i++;	
	}
	count--;
	i=0;
	while(i<count)
	{
		if(name[i] != name[count])
		{
		printf("string is not pallindrom\n");
		return;
		}
		i++;
		count--;
	}
	
	printf("string is paallindrom\n");
	
}

