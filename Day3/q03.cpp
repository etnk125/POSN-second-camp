#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
	int p;
    char info[100];
    struct node *next;
}*head = NULL, *temp = NULL, *t2, *t1;
void create()
{
	int hr,m;
    char data[100],k;
    cin>>data;
    scanf("%2d%1c %2d",&hr,&k,&m);//cout<<hr<<" "<<m<<endl;
    hr=hr*100+m;
    temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->info,data);
    temp->p=hr;
    temp->next=NULL;
}
void search(struct node *t)
{
    if (t->next != NULL)
        search(t->next);
    else if (t->next == NULL)
        t->next = temp;
}
void insert()
{
    create();
    if (head == NULL) 
        head = temp;
    else    
        search(head);    
}
void check(struct node *t)
{
	
	while(t->next!=NULL)
	{
		if(t->p < t->next->p)
		{
			check(t->next);
		}
		else if(t->p > t->next->p)
		{
			temp=t;
			
		}
	}
}
   

main()
{
	int n;
	cin>>n;
	while(n--)
	{
		insert();
	}
}
