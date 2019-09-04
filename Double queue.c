#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue{
	int info;
	struct queue *next;
};

struct queue *front=NULL,*rear=NULL;
void insert_rear();
void insert_front();
void delete_front();
void delete_rear();
void display();
main(){
	int choice;
	while(1)
	{
		printf("\n Main Menue");
		printf(" 1.\n insert from rear");
		printf("2.\n insert from front");
		printf("3.\n delete from front");
		printf("4.\n delete from rear");
		printf("5.\n display");
		printf("6.\n exit");
		printf("\n enter your choice (1-6):");
		printf("\n %d",&choice);
		switch (choice)
		
		{
			 case 1:
				insert_rear();
				break;
		         case 2:
			      insert_front();
			      break;
		         case 3:
			      delete_front();
				  break;
				  
		         case 4:
			     delete_rear();
				 break;
				 
				 
		        case 5:
			     display();
				 break;
				 
				 
				 
	                case 6:
			     exit(0);			 		 		  		  		
		}
	}
}



 insert_front()
   {
	int n;
	struct queue *node;
	printf(" enter the node value:");
	scanf("%d",&n);
	node=((struct queue*)malloc(sizeof(struct queue)));
	node->info=n;
	node->next=NULL;
	if(rear==NULL)
	{
		front=node;
		rear=node;
	}
	else
	{
		node->next=front;
		front=node;
	}
     }///*end of insert front///
insert_rear()
  {
	int n;
	struct queue *node;
	printf(" enter the node value:");
	scanf("%d",&n);
	node=((struct queue*)malloc(sizeof(struct queue)));
	node->info=n;
	node->next=NULL;
	if(rear==NULL)
	{
		front=node;
		rear=node;
	}
	else
	{
	    rear->next=node;
	    rear=node;
	}
   }///*end of insert rear///


 delete_front()
   {
	struct queue *node;
	node=front;
	if(node==NULL)
	{
		printf("\n queue is underflow");		
	}
	else if(node->next=NULL)
	{
		front=rear=NULL;
		free(node);
	}
	else
	{
	front=node->next;
	free(node);	
	}

     }// end of delete_front()*//

 delete_rear()
  {
	struct queue *node;
	node=front;
	if(node==NULL)
	{
		printf("\n queue is underflow");		
	}
	else if(node->next=NULL)
	{
		front=rear=NULL;
		free(node);
	}
    else{
    	while(node->next!=rear)
    	{
    		node=node->next;
		}
		rear=node;
		node=node->next;
		rear->next=NULL;
		
		free(node);
	}
	
       }// end of rear///

void display()
  {
	struct queue *node;
	node=front;
	while(node!=NULL)
	{
		printf("%d",node->info);
		node=node->next;
	}
	
	
   }
// end of display///

