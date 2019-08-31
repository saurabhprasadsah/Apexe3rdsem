#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define SIZE 5
int queue[SIZE],front=0,rear=0;
void enqueue();
void dequeue();
void display();
main()
{
	int choice;
	while (1)
	{
	printf("\n main menu");
	printf("\n enqueue \n 2.dequeue \n 3.display \n 4.exit");
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


// function for enqueue()

void enqueue()
{
	if(rear<SIZE)
	{ 
	printf("enter the value");
	scanf("%d",& queue[rear]);
	rear ++;
	}
	else
	{
		printf("\n queue is overflow");
	}
	
}
// end of enqueue


void dequeue()
{
	if (rear==front)
	{
		printf("dequeue is underflow");
		
	}
	else {
		printf("deleted value is = %d,dequeue(front)");
		front ++;
	}
}// end of dequeue

void display(){
	int i;
	
	for(i=front; i<rear;i++)
	
	{
		printf("\n %d",queue[i]);
	}
}
/// end of display function 
