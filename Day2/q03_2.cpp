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
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
void delete1();
void insert();
void del();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder2(struct btnode *t);
void postorder(struct btnode *t);

 
int flag = 1;
int count=0,c=0;
int a[100000];
main()
{
    int dat,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {	
    	insert();
    }
	count=0;
	preorder2(root);
	printf("%s",c==n?"yes":"no");
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
    a[count++]=data;
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
 


 
/* To find the preorder traversal */
void preorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d ", t->value);
    if (t->l != NULL)    
        preorder(t->l);
    if (t->r != NULL)    
        preorder(t->r);
}
void preorder2(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if(t->value==a[count++])c++;
    if (t->l != NULL)    
        preorder2(t->l);
    if (t->r != NULL)    
        preorder2(t->r);
}

