#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define size 5
int stack [size],top=0
void push();
void pop();
void display();
main(){
	int choice;
	while(1)
	{
		printf("\n main menu");
		printf("1.push\n 2.pop 3.display \n 4.exit");
		printf("enter your choice (1-4)");
		
		switch (choice)
		{
			case 1:push();
			       break;
			       
			       
			case 2:pop();
			       break;
				   
		    case 3:display();
			       break;
				   
	        case 4:exit(0);
						   		          
		}
		
		
		
			}
}
