#include<stdio.h>
void main()
{
	char name[100];
	int count,i,p=0,q=0;
	fgets(name,sizeof(name),stdin);
	for(i=0;name[i]!='\0';i++)
	{
		count=0;
		while(name[i]!=' ' && name[i+1]!='\0')
		{
			count++;
			i++;
		}
		if(count%2==0)
		p++;
		else
		q++;
	}
	printf("The no of even words:%d\nThe no of odd words:%d\n",p,q);
}
