struct node{
	int datea;
	struct node * left;
	struct node * right;
}

void correctbstnil(struct node *root, struct node **first,struct node ** middle,struct node ** last, struct node ** prev)
{
	if(root)
	{
		correctbstnil(root -> left, first, middle, last , prev);
		if(*prev&&(*prev -> data) > (root -> data))
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
		    
		correctbstnil(root -> right, first, middle, last, prev);


	}
}
void correct(struct node * root)
{
	struct node * first,* middle, *last, *prev;
	first = middle = last = prev = NULL:
	correctbstnil(root , &first, &middle, &last, &prev);
	if(first && last)
	{
		swap(&(first -> data), &(last -> data));

	}
	else if(first && middle)
	{
		swap(&(first -> data), &(middle -> data));
	}
}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
