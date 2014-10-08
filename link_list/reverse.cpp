void reverse(struct node * head)
{
	if(head == NULL || head -> next == NULL)
	    return;
	struct node * pHead = NULL;
	struct node * current = head;
	struct node * next;
	while(current != NULL)
	{
		next = current -> next;
		current -> next = pHead;
		pHead = current;
		current = next;
	}
}
