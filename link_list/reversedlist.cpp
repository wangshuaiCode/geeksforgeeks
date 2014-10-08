void reversedoublelist(struct node * head)
{
	struct node * temp = NULL:
	struct node * current = head;
	while(current != NULL)
	{
		temp = current -> prev;
		current -> prev = current -> next;
		current -> next = temp;
	}
	if(temp != NULL)
	    head = temp -> prev;
}
