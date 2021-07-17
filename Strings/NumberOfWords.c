#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i;
	fgets(name,sizeof(name),stdin);
	for(i=0;name[i]!='\0';i++)
	{
		
		if(name[i]==' ' && name[i+1]!=' ')
		{
			count++;
		}
	}	printf("no.of words are:%d\n",count+1);
}
