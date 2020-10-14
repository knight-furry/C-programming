#include<stdio.h>
#include<stdlib.h>
#define max 50
struct stack
{
	int data[max];
	int top;
};

void inti(struct stack* s)
{
	s->top=-1;
}

int empty(struct stack* s)
{
	if(s->top==-1)
	return 1;
	return 0;
}

int full(struct stack* s)
{
	if(s->top==max-1)
	return 1;
	return 0;
}

void push(struct stack* s)
{
	if(full(s))
	{
		printf("Stack is full....!\n");
	}
	else
	{
		(s->top)++;
		printf("Enter the data that you want to push:\n");
		scanf("%d",&(s->data[s->top]));
	}
}

int pop(struct stack* s)
{
	if(empty(s))
	{
		printf("Stack is empty....!\n");
	}
	else
	{
		printf("Pop element is:%d\n",(s->data[s->top]));
		(s->top)--;
	}
}

void display(struct stack p)
{
	printf("\nYour stack is:\n");
	while( (p.top) !=-1)
	{
	
		printf("\t|%d|\n",p.data[p.top]);
		(p.top)--;
	}
	printf("\t---\n");
}

int main()
{
	int choice;
	struct stack s;
	inti(&s);
	do
	{
		printf("*****STACK OPERATION******\n");
		printf("1.push\n2.pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push(&s);
			break;
			case 2:pop(&s);
			break;
			case 3:display(s);
			break;
		}
	}while(choice !=4);
}
