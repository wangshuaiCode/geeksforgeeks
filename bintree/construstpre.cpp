struct node *construst(int pre[],int size)
{
	Stack * s = createstack(size);
	struct node *root = newNode(pre[0]);
	struct node *temp;
	push(s,root);
	for(int i = 1; i < size; ++i)
	{
		temp = NULL;
		while(pre[i] > peek(s) -> data && !s.empty()) 
			temp = pop(s);
		if(temp != NULL)
		{
			temp -> right = newNode(pre[i]);
			push(s, temp -> right);
		}
		else
		{
			peek(s) -> left = newNode(pre[i]);
			push(s, peek(s));
		}
	}
	return root;
}
