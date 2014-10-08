struct node *rotete(struct node * head, int kth)
{
	if(kth == 0)
	    return head;
	int count =1;
	struct node * cur = head;
	while(count < kth && cur != NULL)
	{
		cur = cur -> next;
		count ++;
	}
	struct node * kthnode = cur;
	while(cur -> next != NULL)
	{
	    cur = cur -> next;
	}

	cur -> next = head;
	head = kthnode -> next;
	kthnode -> next = NULL;
	return head;



}
