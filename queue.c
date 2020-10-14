#include<stdio.h>
#include<stdlib.h>
#define max 10
struct queue
{
	int data[max];
	int front;
	int rear;
};

void inti(struct queue* q)
{
	q->front=q->rear=0;
}

int empty(struct queue* q)
{
	if(q->rear==q->front)
	return 1;
	return 0;
}

int full(struct queue* q)
{
	if(q->rear==max)
	return 1;
	return 0;
}

void addqueue(struct queue* s)
{
	if(full(s))
	{
		printf("Queue is full....!\n");
	}
	else
	{
		
		printf("Enter the data that you want to addQueue:\n");
		scanf("%d",&(s->data[s->rear]));
		(s->rear)++;
	}
}

int dequeue(struct queue* s)
{
	int x;
	if(empty(s))
	{
		printf("Queue is empty....!\n");
		inti(s);
	}
	else
	{
		x=s->data[s->front];
		printf("Dequeue element is:%d\n",x);
		(s->front)++;
	}
}

void display(struct queue q)
{
	int i;
	printf("\nYour Queue is:\n");
	for(i=q.front;i<q.rear;i++)
	{
		printf("%d\n",q.data[i]);
	}
	printf("\nThank you...!\n");
}

int main()
{
	int choice;
	struct queue s;
	inti(&s);
	do
	{
		printf("*****QUEUE OPERATION******\n");
		printf("1.Addquque\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:addqueue(&s);
			break;
			case 2:dequeue(&s);
			break;
			case 3:display(s);
			break;
		}
	}while(choice !=4);
}
