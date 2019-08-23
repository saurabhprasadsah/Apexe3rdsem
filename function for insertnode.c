void insert_node(int n)
{
	struct list *node, *temp;
	if(start==NULL)
	{
		node=((struct list *)malloc (size of (struct list)) );
		node->info=n;
		node->next=NULL;
		start node;
	}
	else{
		node=start;
		while(node->next! =NULL)
		{node=node->next;
		}
		temp=((struct list*)malloc(size of(struct list)));
		temp->info=n;
		temp->next=NULL;
		node->next=temp;
	}
}
