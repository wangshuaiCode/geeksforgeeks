void pairswap(struct node * head)
{
	struct node * temp = head;
	while(temp != NULL && temp -> next != NULL)
	{
		swap(&(temp -> data) ,&(temp -> next -> data));
		temp = temp -> next -> next;
	}

}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void pairswapre(struct node * head)
{
	while(head != NULL && head -> next != NULL)
	{
		swap(head -> data, head -> next -> data);
        	pairswapre(head -> next -> next);
	}

}
