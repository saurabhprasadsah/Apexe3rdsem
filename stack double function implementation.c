void push(int s)
{
	int i;
	i = s-1;
	if(top[0]<=top[1])
	{
		printf("\n enter the no");
		scanf("%d",&stack[top[i]]);
		if(i==0)
		{
			top[0]++;
		}
		else
		{
			top[1]--;
		}
		else{
			printf{"\n stack is overflow"};
		}
    }
}//end ofpush();////

void pop(int s)
{
	if(s==1 &&top[0]>0)
	{
		top[0]--;
		printf("deleted value =%d",stack[top[0]]);
		
	}
	else (s==2 &&top[1]< size-1)
     { top[1]--;
     printf("\n delted value = %d",stack[top[1]]);
     
	 }
	 else 
	 {
	 	printf("\n stack is underflow");
	 }
	 	 
	
}
void display(int s)
{
	int i;
	if(s==1 && top[0]>0)
	{
		for(i=0;i<top[0];i++)
		{
			printf("%d \n"stack[i]);
		}
	}
	else if(s==2 && top[1]<size-1)
	{
		for(i=size-1;i>top[1];i--)
		{
			printf("%d \n",stack [i]);
		}
	}
	
	else {
		printf("\n stack is underflow");
	}
}
