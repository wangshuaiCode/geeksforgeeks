struct node * deletenode(struct node * head, struct node * delete)
{
	if(head == NULL && head -> next == NULL)
		return NULL;
	if(head == delete)
	{
		head = delete -> next;
	}
	if(delete -> next != NULL)
	{
		delete -> next -> prev = delete -> prev;
	}
	if(delete -> prev != NULL)
	{
		delete -> prev -> next = delete -> next;
	}
	free(delete);
	return head;
		

}
