/* 
 * C Program to Construct a Binary Search Tree and perform deletion, inorder traversal on it
   http://www.sanfoundry.com/c-program-construct-binary-search-tree/
 */ 
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
 using namespace std;
struct btnode
{
    int value;
    int high;
    int wid;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
void insert();
void inorder(struct btnode *t);
void inorder2(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);

void search1(struct btnode *t,int data);

 
int flag = 1;
 
 main()
{
    int dat,n;
    cin>>n;
 

    for(int i=0;i<n;i++)
    {	
    	insert();
    }
	inorder(root);
    cout<<endl<<endl;
    inorder2(root);
}
 
/* To insert a node in the tree */
void insert()
{
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
}
 
/* To create a node */
void create()
{
    int data;
 
 //   printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
	temp->high++;
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
    {
    	temp->wid++;
    	search(t->r);
	}
        
    else if ((temp->value > t->value) && (t->r == NULL))
    	t->r = temp;        
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
    {
    	temp->wid--;
		search(t->l);
	}
        
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
 
/* recursive function to perform inorder traversal of tree */
void inorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->l != NULL)    
        inorder(t->l);
    printf("%d ", t->value);
    if (t->r != NULL)    
        inorder(t->r);
}
 void inorder2(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
	
    if (t->r != NULL)    
        inorder2(t->r);
    for(int i=0;i<t->high;i++)
   {
   	cout<<" ";
   }
   cout<<t->value<<endl;
    if (t->l != NULL)    
        inorder2(t->l);
    
}

 
/* To find the preorder traversal */
void preorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
   for(int i=0;i<t->high;i++)
   {
   		cout<<" ";
   }
   cout<<t->value<<endl;
    if (t->r != NULL)    
        preorder(t->r);
    if (t->l != NULL)    
        preorder(t->l);
}
 

