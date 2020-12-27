#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* CreateNode()
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\nMemory NOT allocated.......!\n");
	}
	else
	{
		printf("Enter the Data: ");
		scanf("%d", &(newnode->data));
		newnode->next = NULL;
		return newnode;
	}
}

void CreateLinkedList(struct node** head)
{
	struct node* newnode = NULL;
	newnode = CreateNode();
	struct node* tempnode = *head;
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
	if(head == NULL)
	{
		printf("\nLinked List NOT found.....!\n");
	}
	else
	{
		while(head != NULL)
		{
			printf(" %d--->", head->data);
			head = head->next;
		}
	}
}

int OccurenceLinkedList(struct node* head, int num)
{
	int count = 0;
	if(head == NULL)
	{
		printf("LinkedList is EMPTY...!\n");
	}
	else
	{
		while(head != NULL)
		{
			if(head->data == num)
			count++;
			head = head->next;
		}
	}
	return count;
}

void main()
{
	int choice, num, res;
	struct node* first = NULL;
	
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Create Linked list\n2. Display Linked List\n3. Number of Occurence of  a node in Linked List\n4. Exit\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				CreateLinkedList(&first);
				printf("\nSuccessfully Done....!\n");
				break;
			case 2:
				DisplayLinkedList(first);
				printf("\n\nThank You......!\n");
				break;
			case 3:
				printf("Enter the number you want to findout that occurences: ");
				scanf("%d", &num);
				res = OccurenceLinkedList(first, num);
				printf("\nThe number of Occurences of %d are: %d\n", num, res);
		}
	}while(choice != 4);
}
