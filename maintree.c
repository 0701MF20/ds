#include<stdio.h>
#include<conio.h>
struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};
typedef struct node tree;
tree *root=NULL;
tree *find(struct node **loc,struct node **par,int item)
{
if(root==NULL)
{
*loc=NULL;
*par=NULL;
}
if(root->info==item)
{
	*loc=root;
	*par=NULL
}
if(item<root->info)
{
ptr=root->lchild;
save=root;		
}
if(item>root->info)
{
 ptr=root->rchild;
 save=root;
}
while(ptr!=NULL)
{
	if(item==ptr->info)
	{
		*par=save;
		*loc=ptr;
		return;
	}
	if(item>ptr->info)
	{
		*save=ptr;
		ptr=prt->rchild;
}
else
    { 
		*save=ptr;
		ptr=ptr->lchild;
	}
}
*loc=NULL;
*save=NULL;
}
tree * insert(struct node **loc,struct node **par,int item)
{
	if(loc!=NULL)
	{
		printf("Cannot inserted");
		return;
	}
	struct node *new1;
	new1=(struct node*)malloc(sizeof(struct node));
	new1->info=item;
	new1->lchild=NULL;
	new1->rchild=NULL;
	if(*par==NULL)
	{
	  root=new1;	
	}
	if(item<(*par)->item)
	{
	 *par->rchild=new1; 	
	}
	else
	{
		*par->lchild=new1;
	}
}
struct node *deletes(struct node **par,struct node **loc)
{
	struct node *q;
	if(*loc==NULL)
	{
		printf("DELETED");
		return
	}
	if(((*loc)->lchild==NULL)&&((*loc)->rchild==NULL))
	{
		if((*par)==NULL)
		{
		root=NULL;
	    }
	    else if((*par)!=NULL)
	    {
	    	if((*par)->lchild==(*loc))
	    	{
	    		(*par)->lchild=NULL;
			}
			else if((*par)->rchild==(*loc))
			{
				(*par->rchild)==NULL;
			}
		}
		free(*loc);
	}
	if(((*loc)->lchild!=NULL)&&((*loc)->rchild=NULL))
	{
	if((*par)!=NULL)
	{
		
	}
	else
	{
	root=(*loc)->lchild;
	free(*loc);	
	}
	}	
	
	
}

