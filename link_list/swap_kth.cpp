int countnodes(struct node *s)
{
	int count = 0;
	while(s != NULL)
	{
		count++;
		s = s->next;
	}

	return count;
}

void swapnode(struct node *pHead, int kth)
{
	int num = countnodes(pHead);
	if(k > num)
	    return;
	if(num == 2*k -1)
	    return;
	node * x = pHead;
	node * prev = NULL;
	for(int i = 1; i < k; ++i)
	{
		prev = x;
		x = x->next;
	}

	node * y = pHead;
	node * prev2 = NULL;
	for(int i = 1; i < n-k+1; ++i)
	{
		prev2 = y;
		y = y -> next;
	}
	if(prev)
	{
		prev->next = y;

	}
	if(prev2)
	{
		prev2->next = x;
	}

	node *temp = x -> next;
	x->next = y -> next;
	y -> next = temp;
	if(k == 1)
	    pHead = y;
	if(k == num)
	    pHead = x;
}
