void split(struct node * source, struct node * aref, struct node * bref)
{
	struct node * a = NULL;
	struct node * b = NULL;
	struct node * current = source;
	while(current != NULL)
	{
		MoveNode(&a,current);
		if(current != NULL)
		    MoveNode(&b, &currnet);
	}
	&aref = a;
	&bref = b;
}

void MoveNode(struct node ** dest, struct node ** source)
{
	struct node * new_node = *source;
	*source = new_node -> next;
	new_node -> next = *dest;
	*dest = new_node;
}
