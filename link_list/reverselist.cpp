void func1(struct node * head)
{
	if(head == NULL)
	    return;
	func1(head -> next);
	printf("%d", head -> data);
}

void fun2(struct node * head)
{
	if(head == NULL)
	    return;
	    printf("%d", head -> data);
	    if(head -> next != NULL)
	    fun2(head -> next);
	    printf("%d", head -> next-> data);
}
