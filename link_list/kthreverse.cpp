struct node * kthreverse(struct node * head, int k)
{
	struct node * current = head;
	struct node * prev = NULL;
	struct node * next;
	int count = 0;
	while(current != NULL && current < k)
	{
		next = current -> next;
		current -> next = prev;
		prev = current ;
		current = next;
		count++;
	}

	if(head != NULL)
	    head -> next = current;
	count = 0;
	while(count < k-1&& current != NULL)
	{
		current = current -> next;
		count++;
	}

	if(currnt != NULL)
		current -> next = kthreverse(current -> next, k);
	return prev;
}
struct node {
	int data;
	struct node * next;
}

