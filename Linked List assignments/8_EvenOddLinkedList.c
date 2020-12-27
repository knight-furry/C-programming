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

struct node* CreateNode1(int n)
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\nMemory NOT allocated.......!\n");
	}
	else
	{
		newnode->data = n;
		newnode->next = NULL;
		return newnode;
	}
}

void CreateLinkedList1(struct node** head, int n)
{
	struct node* newnode = NULL;
	newnode = CreateNode1(n);
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

void EvenOddLinkedList(struct node* first, struct node** even, struct node** odd)
{
	if(first == NULL)
	{
		printf("\nThe first linkedlist is empty...!\n");
	}
	else
	{
		while(first != NULL)
		{
			if(first->data % 2 == 0)
			{
				CreateLinkedList1(even, first->data);
			}
			else
			{
				CreateLinkedList1(odd, first->data);
			}
			first = first->next;
		}
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	struct node* even = NULL;
	struct node* odd = NULL;
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Create First Linked list\n2. Display First Linked List\n3. Splits Even Odd LinkedLists\n4. Display Even Linked List\n5. Display Odd Linked List\n6. Exit\n");
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
				EvenOddLinkedList(first, &even, &odd);
				printf("\nSuccessfully Done....!\n");
				break;
			case 4:
				DisplayLinkedList(even);
				printf("\n\nThank You......!\n");
				break;
			case 5:
				DisplayLinkedList(odd);
				printf("\n\nThank You......!\n");
				break;
		}
	}while(choice != 6);
}
