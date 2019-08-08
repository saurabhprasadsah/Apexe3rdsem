///Array using implementation
//push,pop,display!!!!!!!!!!!!!!!!!


void push(){
	if(top>=size)
	{
		printf("stack is overflow")
	}
	else
	{
		printf("\n enter the value");
		scanf("%d",&stack [top]);
		top++;
	}
}//end of push();

void pop()
{
	if(top<=0)
	{
		printf("\n stack is overflow");
		
	}
	else
	top--;
	printf("deleted value =%d",stack[top]);
}// end of pop//

void display()
{
	int i;
	for(i=0;i<top;i++)
	{
		printf("\n %d",stack[i] );
	}
}
// end of display///
