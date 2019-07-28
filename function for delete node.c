void delete_node()
{
	struct list *node,*prev;
	prev = start;
	node= prev->next;
	if (prev->next==NUll)
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
prev->next=NULL;
free(node);
	
}
