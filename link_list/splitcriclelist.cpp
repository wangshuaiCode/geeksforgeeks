void split(struct node * head, struct node * head1, struct node * head2)
{
	struct node * fast = head;
	struct node * slow = head;
	while(fast -> next != head && fast -> next -> next != head)
	{
		fast = fast -> next -> next;
		slow = slow -> next;
	}
	if(fast -> next -> next == head)
	      fast = fast -> next;
	    head1 = head;
	    head2 = slow -> next;
	    fast -> next = head2;
	    slow -> next =head1;

}
