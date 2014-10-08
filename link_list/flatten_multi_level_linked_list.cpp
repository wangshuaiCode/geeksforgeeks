struct node{
	int data;
	struct node * next;
	struct node * child;
};

void flatten_multi_level_linked_list(struct node * head)
{
	if(head == NULL)
	    return;
	struct node * temp = NULL;
	struct node * tail = head;
	struct node * cur = head;
	while(tail -> next != NULL)
	{
		tail = tail -> next;
	}
	while(cur != tail)
	{
		if(cur -> child)
		{
			tail -> next = cur -> child;
			temp = cur -> child;
			while(temp -> next)
				temp = temp -> next;
			tail = temp;
		}             
		cur = cur -> next;
	}
	

}


