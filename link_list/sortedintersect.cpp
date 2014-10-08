struct node * sortedintersect(struct node * a, struct node * b,struct node *result )
{
	if(a == NULL || b = NULL)
	    return;
	if(a -> data > b -> data)
	    return sortedintersect(a, b -> next);
	    
	else if(a -> data < b -> data)
	    return sortedintersect(a -> next ,b);
	else 
	{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp -> data = a -> data;
		if(result == NULL)
		    result = temp;
		else 
		{
		    result -> next = temp;
		    result = temp;
		}
		result -> next = sortedintersect(a -> next, b -> next, resutt);
	}
	return result;
       
}
