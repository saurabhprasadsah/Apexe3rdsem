#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct list{
	int info;
	struct list *next;
	
};
struct list *start = Null;
void insert-node (int n);
void delete-node();
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
		           insert-node(n);
		           break;
		           
		           
	        case 2: delete-node();
	                break;
	                
	        case 3:display();
			       break;
			case 4:exit(0);
				           
		 } 
	}
}

