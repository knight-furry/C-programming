#include<stdio.h>
void main()
{
	char name[50];
	int i,j,n,temp,a[i];
	printf("Enter a string:\n");
	fgets(name,sizeof(name),stdin);
	for(i=0;name[i]!='\0';i++)
	printf("%c",name[i]);
	
	printf("\nThe array from a string is:");
	for(i=0;name[i]!='\0';i++)
	printf("%d\t",name[i]);
	printf("\n");
}
