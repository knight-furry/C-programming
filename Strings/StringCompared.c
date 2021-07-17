#include<stdio.h>
void main()
{
	char name[100],name1[100];
	int count=0,i=0,n,flag=0;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	printf("Enter second string:\n");
	fgets(name1,sizeof(name1),stdin);
	
	while(name[i]!='\0' && name1[i]!='\0')
	{
		if(name[i]!=name1[i])
		{
			flag++;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("strings are equal....\n");
	else
	printf("strings are not equal....\n");
}
