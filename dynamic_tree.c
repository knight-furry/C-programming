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
	struct node* creatnode=NULL;
	creatnode=(struct node*)malloc(sizeof(struct node));
	if(creatnode==NULL)
	{
		printf("Memory not allocate....!\n");
	}
	else
	{
		printf("\nEnter the data:\n");
		scanf("%d",&creatnode->data);
		creatnode->left=NULL;
		creatnode->right=NULL;
		return creatnode;
	}
}

void creatlink(struct node** head)
{
	struct node* p=*head;
	struct node* temp=NULL;
	temp=creatnode();
	
		if(*head==NULL)
		{
			*head=temp;
		}
		else
		{
			while(p !=  NULL)
			{
				if(temp->data < p->data)
				{
					if(p->left==NULL)
					{
						p->left=temp;
						break;
					}
					else
					{
						p=p->left;
					}
				}
				else
				{
					if(p->right==NULL)
					{
						p->right=temp;
						break;
					}
					else
					{
						p=p->right;
					}
				}
			}
			
		}
	
}

void display(struct node* root)
{
	if(root==NULL)
	return;
	else
	{
		display(root->left);
		display(root->right);
		printf("%d-->",root->data);
		//display(root->left);
		//display(root->right);
		//display(root->left);
	}
}

void main()
{
	int choice;
	struct node* root=NULL;
	do
	{
		printf("\n*****TREE OPRATION******\n");
		printf("1.Create Tree\n2.Display\n3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:creatlink(&root);
				break;
			case 2:display(root);
				break;
		}
	}while(choice !=3);
}
