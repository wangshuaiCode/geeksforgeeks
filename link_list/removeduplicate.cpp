void removeduplicates(struct node * head)
{
	if(head == NULL)
	    return;
	struct node * next_next = NULL;
	struct node * current = head;
	while(current -> next != NULL)
	{
		if(current -> data == current -> next -> data )
		{
			next_next = current -> next -> next;
			free(current -> next);
			curretn -> next = next_next;
		}
		else
		current = current -> next;
	}
}
