#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i;
	fgets(name,sizeof(name),stdin);
	for(i=0;name[i]!='\0';i++)
	count++;

	while(name[count]!=' ')
	count--;

	count++;
	while(name[count]!='\0')
	{
		printf("%c",name[count]);
		count++;
	}
}
