#include<stdio.h>
void main()
{
	char name[100];
	int count=0,i=0,n;
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	
	while(name[i]!='\0')
	{
		if(name[i]==' ')
		{
                  printf("%c",name[i]);
			i++;
		}
		else
		{
			
			if((name[i]!=' ' && name[i+1]==' ' && name[i+1]!='\n')
			{
				count=i;
				while(count>=0 && name[count]!=' '&& name[i]!='\0')
				{
					printf("%c",name[count]);
					count--;
				}
				i++;
			}
			else
			{i++;}
		}
	}
}

