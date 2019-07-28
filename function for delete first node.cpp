void delete_node()
{
	struct list *node;
	node = start;
	if(node->next==NUll)
	{
		start=NUll;
		free(node);
	}
	else
	{
		start =node->next;
		free(node);
	}
}
