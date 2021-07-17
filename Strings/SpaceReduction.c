#include<stdio.h>
void main()
{
	char name[100];
	int count=0;
	fgets(name,sizeof(name),stdin);
	puts(name);
	printf("singal space string is:\n");
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			if(name[i+1]==' ')
			continue;
		}
		printf("%c",name[i]);
	}
}
