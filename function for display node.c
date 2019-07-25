void dispaly()
{
	struct list *node;
	node = start;
	while(node!=NULL)
	{
		printf("%d \t",node->info);
		node = node->next;
	}
}
