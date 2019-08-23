#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct list{
	int info;
	struct list *next;	
};

struct list *start = NILL;
void insert_node (int n);
void delete_node();
void display();


main(){
	int n,choice;
	while(1)
	{
		
		printf("\n main menu");
		printf("\n insert node");
		printf("\n delete node");
		printf("\n display node value");
		printf(" \n 4.exit");
		printf("enter your choice (1-4);");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("enter thr value");
		           scanf("%d",&n);
		           insert_node(n);
		           break;
		           
		           
	        case 2: delete_node();
	                break;
	                
	        case 3:display();
			       break;
			case 4:exit(0);
				           
		 } 
	}
}


void insert_node(int n)
{
	struct list *node, *temp;
	if(start==Null)
	{
		node=((struct list *)malloc (size of (struct list)) );
		node->info=n;
		node->next=NULL;
		node->prev =NULL;
		start Node;
	}
	else{
		node=start;
		while(node->next! =NULL)
		{node=node->next;
		}
		temp=((struct list*)malloc(size of(struct list)));
		temp->info=n;
		temp->next=NULL;
		node->next=temp;
		temp->prev =node;
	}
}

