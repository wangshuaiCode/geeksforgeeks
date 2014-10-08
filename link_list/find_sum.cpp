bool isfindsum(struct node * head1, struct node *head2, struct node * head3, int num)
{
	struct node * a = head1;
	while(a ! = NULL)
	{
		struct node * b = head2;
		struct node * c = head3;
		while(b != NULL || c != NULL)
		{
			int sum = a->data + b->data + c->data;
			if(sum == num )
			{
				return bool;
			}
			else if(sum < num)
			{
			    b = b->next; 
			}
			else
			{
			    c = c->next;
			}
		}
		a = a-> next;
		
		
		
	}
	return false;
}

