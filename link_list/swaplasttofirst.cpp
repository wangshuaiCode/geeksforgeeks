void swaplast(struct node * head)
{
	struct node * last =head;
	struct node * seclast;
	while(last -> next != NULL)
	{
		seclast = last;
		last = last -> next;
	}
	seclast -> next = NULL;
	last -> next = head;
	head = last;
}
