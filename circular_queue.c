#include<stdio.h>
#include<stdlib.h>
#define max 10
struct queue
{
	int data[max];
	int front;
	int rear;
	int count;
};

void inti(struct queue* q)
{
	q->front=q->rear=q->count=0;
}

int empty(struct queue* q)
{
	if(q->count==0)
	return 1;
	return 0;
}

int full(struct queue* q)
{
	if(q->count==max)
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
		(s->count)++;
		(s->rear)=((s->rear)+1)% max;
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
		(s->count)--;
		(s->front)=((s->front)+1)% max;
	}
}

void display(struct queue *q)
{
	int i , j;
	printf("\nYour Queue is:\n");
	j = q -> front;
	for(i = 0 ; i < q->count ; i++)
	{
		printf("%d\n",q->data[j]);
		j=(j+1)%max;
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
			case 3:display(&s);
			break;
		}
	}while(choice !=4);
}
