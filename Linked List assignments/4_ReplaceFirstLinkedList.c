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

void ReplaceFirstLinkedList(struct node** head)
{
	struct node* newnode = NULL;
	newnode = CreateNode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = (*head)->next;
		*head = newnode;
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Create Linked list\n2. Display Linked List\n3. Replace first node of Linked List\n4. Exit\n");
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
				ReplaceFirstLinkedList(&first);
				printf("\nSuccessfully Done....!\n");
		}
	}while(choice != 4);
}
