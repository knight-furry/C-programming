#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* creatnode()
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

void creatlinkedlist(struct node** head)
{
	struct node* newnode = NULL;
	newnode = creatnode();
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

int countnode(struct node* head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

void displaylinkedlist(struct node* head)
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

void insert_at_first(struct node** head)
{
	struct node* newnode = NULL;
	newnode = creatnode();
	newnode->next = *head;
	*head = newnode;
}

void insert_at_position(struct node** head)
{
	int i,pos,count;
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	count = countnode(*head);
	printf("\nEnter the position: ");
	scanf("%d", &pos);
	if(pos == 1)
	{
		insert_at_first(head);
	}
	else if(pos == count + 1)
	{
		creatlinkedlist(head);
	}
	else if(pos < 1 || pos > count + 1)
	{
		printf("\nInvalide position....! please try again....!\n");
		insert_at_position(head);
	}
	else
	{
		newnode = creatnode();
		for(i = 1; i < pos - 1; i++)
		{
			tempnode = tempnode->next;
		}
		newnode->next = tempnode->next;
		tempnode->next = newnode;
	}
}

void delete_at_last(struct node** head)
{
	struct node* tempnode = *head;
	struct node* deletenode = NULL;
	if(*head == NULL)
	{
		printf("\n\nThere is NO linkedlist.....!\n");	
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		
		while(tempnode->next->next != NULL)
		{
			tempnode = tempnode->next;
		}
		deletenode = tempnode->next;
		tempnode->next = NULL;
		free(deletenode);
	}
}

void delete_at_first(struct node** head)
{
	if(*head == NULL)
	{
		printf("\n\nThere is NO linkedlist.....!\n");	
	}
	else
	{
		struct node* tempnode = *head;
		*head = tempnode->next;
		free(tempnode);
	}
}

void delete_at_position(struct node** head)
{
	int i,pos,count;
	struct node* tempnode = *head;
	struct node* deletenode = NULL;
	count = countnode(*head);
	printf("\nEnter the position: ");
	scanf("%d", &pos);
	if(pos == 1)
	{
		delete_at_first(head);
	}
	else if(pos == count)
	{
		delete_at_last(head);
	}
	else if(pos < 1 || pos > count)
	{
		printf("\nInvalide position....! please try again....!\n");
		delete_at_position(head);
	}
	else
	{
		for(i = 1; i < pos - 1; i++)
		{
			tempnode = tempnode->next;
		}
		deletenode = tempnode->next;
		tempnode->next = tempnode->next->next;
		free(deletenode);
	}
}

void main()
{
	int choice;
	int ch;
	struct node* first = NULL;
	
	do
	{
		printf("\n\n*********************** Welcome to Linked List ***********************\n");
		printf("1. Creat linked list\n2. Display linked list\n3. Insert node\n4. Delete node\n5. Exit\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				creatlinkedlist(&first);
				printf("\nSuccessfully Done....!\n");
				break;
			case 2:
				displaylinkedlist(first);
				printf("\n\nThank You......!\n");
				break;
			case 3:
				printf("Insert node at:\n1. First\n2. Last\n3. Position\nEnter your choice: ");
				scanf("%d", &ch);
				switch(ch)
				{
					case 1:
						insert_at_first(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					case 2:
						creatlinkedlist(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					case 3:
						insert_at_position(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					default:
						printf("\n\nInvalid choice......!\n");
				}
				break;
			case 4:
				printf("Delete node at:\n1. First\n2. Last\n3. Position\nEnter your choice: ");
				scanf("%d", &ch);
				switch(ch)
				{
					case 1:
						delete_at_first(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					case 2:
						delete_at_last(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					case 3:
						delete_at_position(&first);
						printf("\n\nSuccessfully Done....!\n");
						break;
					default:
						printf("\n\nInvalid choice......!\n");
				}
				break;
		}
	}while(choice != 5);
}