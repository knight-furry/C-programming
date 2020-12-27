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

void MergeLinkedList(struct node** first, struct node* second)
{
	struct node* temp =*first;
	
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = second;
}

void main()
{
	int choice;
	struct node* first = NULL;
	struct node* second = NULL;
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Create Linked list 1\n2. Create Linked list 2\n3. Display Linked List\n4. Merge Linked List\n5. Exit\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				CreateLinkedList(&first);
				printf("\nSuccessfully Done....!\n");
				break;
			case 2:
				CreateLinkedList(&second);
				printf("\nSuccessfully Done....!\n");
				break;
			case 3:
				DisplayLinkedList(first);
				printf("\n\nThank You......!\n");
				break;
			case 4:
				MergeLinkedList(&first, second);
				printf("\nSuccessfully Done....!\n");
		}
	}while(choice != 5);
}
