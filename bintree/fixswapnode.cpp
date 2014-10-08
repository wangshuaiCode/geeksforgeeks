void fixswapnode(struct node *root, struct node **first,struct node **middle,struct node **last,sturct node **prev)
{
	if(root)
	{
		fixswapnode(root -> left, first, middle, last, prev);

		if(*prev && root -> data < *prev -> data)
		{
			if(!*first)
			{
				*first = *prev;
				*middle = root;
			}
			else
			    *last = root;
		}
		*prev = root;
		fixswapnode(root -> right, first, middle, last, prev);
	}
}

void fixup(struct node *root)
{
	struct node * first = *middle = *last = *prev =NULL;
	fixswapnode(root, &first, &middle, &last, &prev);
	if(*first && *last)
		swap(*first -> data, *last -> data);
	else
	    swap(*middle -> data, *first -> data);
}
