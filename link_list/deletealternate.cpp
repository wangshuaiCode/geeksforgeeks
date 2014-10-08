void deleteAlt(struct node * head)
{
	if(head == NULL)
	    return;
	struct node * prev = head;
	struct node * pdelete = head -> next;
	while(prev != NULL && pdelete != NULL)
	{
		prev -> next = pdelete -> next;
		delete(pdelete);
		prev = prev -> next;
		if(prev != NULL)
		    pdelete = prev -> next;
	}

}
