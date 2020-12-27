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

void SearchLinkedList(struct node* head, int num)
{
	int flag = 0;
	if(head == NULL)
	{
		printf("\nLinked List NOT found.....!\n");
	}
	else
	{
		while(head != NULL)
		{
			if(head->data == num)
			{
				flag = 1;
				break;
			}
			head = head->next;
		}
		if(flag == 1)
		printf("The given number is present in linked list..!\n");
		else
		printf("The given number is NOT present in linked list..!\n");
	}
}

void main()
{
	int choice;
	int num;
	struct node* first = NULL;
	
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Create Linked list\n2. Display Linked List\n3. Search a number in Linked List\n4. Exit\n");
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
				printf("Enter a number to search in linked list: ");
				scanf("%d", &num);
				SearchLinkedList(first, num);
				printf("\nSuccessfully Done....!\n");
		}
	}while(choice != 4);
}
