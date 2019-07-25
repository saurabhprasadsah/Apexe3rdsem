void insert-node(int n)
{
	struct list *node, *?temp;
	if(start==Null)
	{
		node=((struct list *)malloc (size of (struct list)) );
		node->info=n;
		node->next=NULL;
		start Node;
	}
	else{
		Node=start;
		while(Node->next! =NULL)
		{Node=Node->next;
		}
		temp=((struct list*)malloc(size of(struct list)));
		temp->info=n;
		temp->next=NULL;
		node->next=temp;
	}
}
