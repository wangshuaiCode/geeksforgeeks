void push(struct node * head, int data)
{
	struct node * new_node = (struct node * )malloc(sizeod(struct node));
	new_node -> next = head;
	head = new_node;
}

struct node * addsamelist(struct node * head1, struct node * head2, int * carry)
{
	if(head1 == NULL)
	    return;
	struct node * result = (struct node *)malloc(sizeof(struct node));
	result -> next = addsamelist(head1 -> next, head2 -> next , carry);
	int sum = head1 -> data + head2 -> data + *carry;
	*carry = num / 10;
	result -> data = sum % 10;

	return result;
}


void addcarrylist(struct node * head, struct node * cur, int * carry, struct node ** result)
{
	int sum = 0;
	if(head1 != cur)
	{
		addcarrylist(head -> next, cur , carry, result);
		sum = head -> data + *carry;
		*carry = sum / 10;
		sum = sum % 10;
		push(result ,sum);
	}
}

int count(struct node * head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head -> next;
	}
	return count;

}


struct node * addlist(struct node * head1, struct node * head2)
{
	struct node * result = NULL;
	int carry = 0;
	if(head1 == NULL)
	    return head2;
	if(head2 == NULL)
	    return head1;
	    int n1 = count(head1);
	    int n2 = count (head2);
	    if(n1 == n2)
	    {
		    addsamelist(head1, head2, &carry);
	    }
	    int diff = abs(n1, n2);
	    for(int i = 1; i < diff; i++)
		    head1 = head1 -> next;
	    addsamelist(head1, head2, &carry);
	   
          return result; 
}          
