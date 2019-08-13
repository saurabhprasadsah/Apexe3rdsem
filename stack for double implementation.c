#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


# define size 10
int stack [size],top[2]={0,size-1};
void push(int s); // s= stack
void pop(int s);
void display(int s);

main(){
	int choice, s;
	while(1)
	{
		printf("\n main menu");
		printf("\n 1.push \n 2.pop \n display \n 4.exit");
		printf("\n enter your choice(1-4):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n enter the stack no");
				scanf("%d",&s);
				push(s);
				break;
				
				
			case 2:
				printf("\n enter the stack no");
				scanf("%d",&s);
				pop(s);
				break;
		    case 3:
				printf("\n enter the stack no");
				scanf("%d",&s);
				display(s);
				break;
		}
	}
}


