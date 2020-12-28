#include<stdio.h>
#include<stdlib.h>

struct node
{
	char *str;
	struct node* next;
};

char* fun()
{
	scanf(" ");
	int i=0;
	char *p = NULL;
	p = (char *)malloc(sizeof(char));
	while(1)
	{
		scanf("%c", p+i);
		if(*(p+i) == '\n')
		{
			*(p+i) = '\0';
			break;
		}
		i++;
	}
	return p;
}

struct node* CreateNode()
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory not allocated...!\n");
	}
	else
	{
		printf("Plz enter string: ");
		newnode->str = fun();
		newnode->next = NULL;
		return newnode;
	}
}

void CreateLinkedList(struct node** head)
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	newnode = CreateNode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
}

void DisplayLinkedList(struct node* head)
{
	while(head != NULL)
	{
		printf("%s --> ", head->str);
		head = head->next;
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
		printf("\n===========================LinkedList===========================\n");
		printf("1. Create Linked List\n2. Display Linked List\n3. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				CreateLinkedList(&first);
				printf("\nSuccessfully done..!\n");
				break;
			case 2:
				DisplayLinkedList(first);
				printf("\nThank you..!\n");
		}
	}while(choice != 3);
}