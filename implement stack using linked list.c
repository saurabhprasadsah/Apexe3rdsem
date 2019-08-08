#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct stack{
	int info;
	struct stack *next;	
};

struct list *start = NULL;
void push (int n);
void pop();
void display();


main(){
	int n,choice;
	while(1)
	{
		
		printf("\n main menu");
		printf("\n push");
		printf("\n pop");
		printf("\n display value");
		printf(" \n 4.exit");
		printf("enter your choice (1-4);");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("enter thr value");
		           scanf("%d",&n);
		           push(n);
		           break;
		           
		           
	        case 2: pop();
	                break;
	                
	        case 3:display();
			       break;
			case 4:exit(0);
				           
		 } 
	}
}
//*end of main*/////////


// fuction of push

void push(int n)
{
	struct stack *Node, *temp;
	if(start==NULL)
	{
		Node=((struct stack*)malloc(size of(struct stack)));
		Node->info=n;
		Node->next=NULL;
		start = Node;
	}
	else{
		Node=start;
		while(Node->next! =NULL)
		{Node=Node->next;
		}
		temp=((struct stack*)malloc(size of(struct stack)));
		temp->info=n;
		temp->next=NULL;
		Node->next=temp;
	}
}
///function of pop


void pop()

{
	struct stack *prev,*node;
	prev=start;
	if(start==Null)
	{
		printf("stack is underflow");
		
	}
	else if(prev->next==Null)
	{
		start=Null;
		free(prev);
	}
	
	else
	{
		node=prev->next;
		while(node->next!=Null)
		
		{
			node=node->next;
			prev=prev->next;
		}
		prev->next=Null;
		free(node);
	}
	
}



/// function of display


void display()
{
	struct stack *Node;
	Node=start;
	while(Node!=NULL)
	{
		printf("%d \n",Node->info);
		Node= Node->next;
	}
}
//end of display
