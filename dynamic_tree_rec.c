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

struct node* creatlink(struct node** head,struct node* temp)
{
	struct node* p=*head;
	//struct node* temp=NULL;
	
	

			if(p == NULL)
			{
				*head=temp;
				return *head;
			}
			else
			{ 
				if(temp->data < p->data)
				{
					if(p->left==NULL)
					{
						p->left=temp;
						//return p->left;
					}
					else
					creatlink(&p->left,temp);
					
				}
				else 
				{
					if(p->right==NULL)
					{
						p->right=temp;
						//return p->right;
					}
					else
					creatlink(&p->right,temp);
				}
			}
}

void display(struct node* root)
{
	struct node* temp=root;
	if(temp==NULL)
	return;
	else
	{
		//display(root->left);
		//display(root->right);
		printf("%d-->",temp->data);
		display(temp->left);
		display(temp->right);
		
	}
}

void main()
{
	int choice;
	struct node* root=NULL;
	struct node* temp=NULL;
	do
	{
		printf("\n*****TREE OPRATION******\n");
		printf("1.Create Tree\n2.Display\n3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				temp=creatnode();
				creatlink(&root,temp);
				break;
			case 2:display(root);
				break;
		}
	}while(choice !=3);
}
