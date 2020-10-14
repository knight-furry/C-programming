#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* creatnode()
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\n\nMemory NOT allocated....\n\n");
	}
	else
	{
		printf("\nEnter the data: ");
		scanf("%d", &(newnode->data));
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
	}
}

void creatlinkedlist(struct node** head)
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	newnode = creatnode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(tempnode->right != NULL)
		{
			tempnode = tempnode->right;
		}
		tempnode->right = newnode;
		newnode->left = tempnode;
	}
}

int countnode(struct node* head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->right;
	}
	return count;
}

void displaylinkedlist(struct node* head)
{
	struct node* trevelnode = head;
	printf("\n\nYour Linked list :\n\n");
	if(trevelnode == NULL)
	{
		printf("\n\nThere is no linked list....!\n\n");
	}
	else
	{
		while(trevelnode != NULL)
		{
			printf("%d ==> ", trevelnode->data);
			trevelnode = trevelnode->right;
		}
	}
}

void insert_at_first(struct node** head)
{
	struct node* newnode = NULL;
	newnode = creatnode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->right = *head;
		(*head)->left = newnode;
		*head = newnode;
	}
}

void insert_at_position(struct node** head)
{
	int pos, count, i;
	printf("\n\nEnter the position: ");
	scanf("%d", &pos);
	count = countnode(*head);
	if(pos == 1)
	{
		insert_at_first(head);
	}
	else if(pos == count + 1)
	{
		creatlinkedlist(head);
	}
	else if(pos < 1 || pos > (count + 1))
	{
		printf("\n\nInvalid Option......\nPlease try again.....\n");
		insert_at_position(head);
	}
	else
	{
		struct node* newnode = NULL;
		struct node* trevelnode = *head;
		newnode = creatnode();
		for(i=1; i < pos; i++)
		{
			trevelnode = trevelnode->right;
		}
		newnode->left = trevelnode->left;
		trevelnode->left->right = newnode;
		trevelnode->left = newnode;
		newnode->right = trevelnode;
	}
}

void delete_at_last(struct node** head)
{
	struct node* trevelnode = *head;
	struct node* tempnode = NULL;
	if(*head == NULL)
	{
		printf("\n\nSorry, there is NO linkedlist.......\n");
	}
	else if(trevelnode->right == NULL)
	{
		free(trevelnode);
		*head = NULL;
	}
	else
	{
		while(trevelnode->right != NULL)
		{
			trevelnode = trevelnode->right;
		}
		tempnode = trevelnode;
		trevelnode->left->right = NULL;
		free(tempnode);
	}
}

void delete_at_first(struct node** head)
{
	struct node* tempnode = *head;
	if(*head == NULL)
	{
		printf("\n\nSorry, There is NO linkedlist.......\n");
	}
	else if(tempnode->right == NULL)
	{
		free(tempnode);
		*head = NULL;
	}
	else
	{
		*head = tempnode->right;
		(*head)->left = NULL;
		free(tempnode);
	}
}

void delete_at_position(struct node** head)
{
	int pos, count, i;
	printf("\n\nEnter the position: ");
	scanf("%d", &pos);
	count = countnode(*head);
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
		printf("\n\nInvalid Option......\nPlease try again.....\n");
		delete_at_position(head);
	}
	else
	{
		struct node* trevelnode = *head;
		for(i=1; i < pos; i++)
		{
			trevelnode = trevelnode->right;
		}
		trevelnode->left->right = trevelnode->right;
		trevelnode->right->left = trevelnode->left;
		trevelnode->right = NULL;
		trevelnode ->left = NULL;
		free(trevelnode);
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
