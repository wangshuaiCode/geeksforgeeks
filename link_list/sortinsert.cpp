struct node * {
	int data;
	struct node * next;
}

void sortinsert(struct node * head, struct node * new)
{
	struct node * current = head;
	if(current == NULL)
	{
		new -> next = new;
		head = new;
	}
	if(current -> data > new -> data)
	{
		while(current -> next != head)
		    current = current -> next;
		current -> next = new;
		new -> next = head;
		head = new;

	}
	else
	{
		while(current -> next != head && current -> next -> data < new -> data)
		    current = current -> next;
		    new -> next = current -> next;
		    current -> next = new;
	}
	

}
