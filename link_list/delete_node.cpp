void deletenode(struct node * head, struct node * n)
{
	if(head == n)
	{
		if(head -> next == NULL)
		    return;
		    head -> data = head -> next -> data;
		    n = head -> next;
		    head -> next = n -> next;
		    free(n);
		    return;
	}
	struct node * prev = head;
	while(prev -> next != NULL && prev -> next != n)
	{
		prev = prev -> next;
	}
	if(prev -> next == NULL)
		return;
	prev -> next = n -> next;
	free (n);
	return;
}
