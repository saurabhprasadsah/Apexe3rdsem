#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct list{
	int info;
	struct list *next;
	
};
struct list *start = NULL;
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
		printf("\n display node ");
		printf(" \n 4.exit");
		printf("enter your choice (1-4);");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			   printf("enter the value");
		           scanf("%d",&n);
		           insert_node(n);
		           break;
		           
		           
	        case 2:
		      delete_node();
	                break;
	                
	        case 3:
		      display();
		       break;	
		case 4:
		    exit(0);
				           
		 } 
	}
}

