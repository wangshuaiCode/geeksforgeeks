struct node * sortedmerge(struct node *a, struct node * b)
{
	struct node * result = NULL;
	if(a == NULL)
	    return b;
	if(b == NULL)
	    return a;
	if(a -> data < b -> data)
	{
		result = a;
		result -> next = sortedmerge(a -> next , b);

	}
	else
	{
		result = b;
		result -> next = sortedmerge(b -> next , a);
	}
	return result;
	
}

struct node * mergesort(struct node * head) 
{
	if(head == NULL || head -> next == NULL)
		return ;
		struct node * a, *b;
		split(head, a, b);
		mergesort(a);
		mergesort(b);
	       head =  sortedmerge(a, b);
}
