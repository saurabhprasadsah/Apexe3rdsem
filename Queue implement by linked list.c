#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{
	int info;
	struct queue *Next;
	
};
struct queue *front=NULL,*rear=NULL;
void enqueue();
void dequeue();
void display();

main()

{
	int choice;
	while (1)
	{
	printf("\n main menu");
	printf("\n1.enqueue \n 2.dequeue \n 3.display \n 4.exit");
	printf("\n enter your choice(1-4)");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		    enqueue();
		    break;
		    
		    
		case 2:
		    dequeue();
			break;
			
		case 3:
		     display();
			 break;
			 
		case 4:
		    exit(0);	 	    
    }
  }
}
/// end of main

void enqueue()
{
	struct queue *Node;
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	Node=((struct queue*) malloc(sizeof (struct queue)));
	Node->info=n;
	Node->Next=NULL;
	if(rear==NULL)
	{
		front=Node;
		rear=Node;
		
	}
	else
	{
		rear->Next=Node;
		rear=Node;
	}
}//*end of enqueue()*////

void dequeue()
{
	struct queue *Node;
	Node=front;
	if(front==NULL)
	{
		printf("queue is underflow");
		
	}
	else if(Node->Next==NULL)
	{
		front=NULL;
		rear=NULL;
		free(Node);
	}
	else{
		front=Node->Next;
		free(Node);
	}
}//end of dequeue//***



void display()
{
	struct queue *Node;
	Node=front;
	while (Node!=NULL)
	{
		printf("%d",Node->info);
		Node=Node->Next;
	}
}//end of display/*
