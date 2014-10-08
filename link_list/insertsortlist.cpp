void insertsort(struct node *head, struct node * new_node)
{
	if(head == NULL || head -> data > new_node -> data)
	{
		new_node -> next = head;
		head = new_node;
	}
	else
	{
		struct node * current = head;
		while(current -> next != NULL && current -> next ->data < new_node -> data)
		{
			current = current -> next;
		}
		new_node -> next = current -> next ;
		current -> next = new_node;
	}
}
