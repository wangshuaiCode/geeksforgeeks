void reverseprintf(struct node* head)
{
	if(head == NULL)
	    return;

	reverseprintf(head -> next);
	printf("%d", head -> data);
}
