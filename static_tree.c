#include<stdio.h>
#define max 20

void create(int data,int array[max])
{
	int left,right,temp1;
	int i=0;
	
	while(array[i] != '\0')
	{
		left=2i+1;
		right=2i+2;
		if(array[i] > data)
		{
			temp1=array[left];
			array[left]=data;
		}
		else
		{
			temp1=array[right];
			array[right]=data;
		}
		i++;
	}
	
}

void display(int array[max])
{
	int i=0;
	while(array[i] != '\0')
	{
		printf("%d\t",array[i]);
		i++;
	}
	printf("\n");
}

void main()
{
	int data,array[max];
	int choice,i,size;
	do
	{
		printf("\n******TREE******\n");
		printf("1.Create\n2.Display\n3.Exit\nEnter yur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element:\n");
				scanf("%d",&data);
				create(data,array);
				break;
			case 2:
				display(array);
				break;
		}
	}while(choice != 3);
}
