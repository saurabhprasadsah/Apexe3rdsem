void delete_node()
{
	struct list *node;
	node = start;
	node= prev->next;
	if (node->next==NUll)
	{
		start=NUll;
		free(prev);
	}
	
	
	else {
		while(node->next!=Null)
{
	node=node->next;
	prev=prev->next;
}
node->prev->next=NULL;
free(node);
	
}
