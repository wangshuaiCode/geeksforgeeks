struct node * converttobstresur(struct * node head, int n)
{
	if(n <= 0)
	    return NULL;
	struct node * left = converttobstresur(head, n/2);
	struct node * root  = head;
	root -> prev = left;
	head = head -> next;
	converttobstresur(head, n - n/2 - 1);
	return root;

}

