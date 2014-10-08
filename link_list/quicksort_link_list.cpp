struct node{
	int data;
	struct node * next;
	struct node * prev;
};
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp
}

struct node * lastnode(struct node *root)
{
	while(root && root -> next)
	    root = root ->next;
	    return root;
}

struct node *partition(struct node *low, struct node *high)
{
	int key = high->data;
	struct node * i = low -> prev;
	for(struct node * j = low; j != high; j = j->next)
	{
		if(j -> data < key)
		{
		    i = (i == NULL)?l:i->next;
		    swap(&i->data, &j->data);
		}

	}
	i = (i == NULL)? l:i->next;
	swap(&i->data, &high->data);
	return i;
}

void _quicksort(struct node *low, struct node *high)
{
	if(high != NULL && low != high && high -> next != low)
	{
		struct node *len = partition(low, high);
		_quicksort(low, len->prev);
		_quicksort(len -> next, high);
	}
}


void quicksort(struct node *root)
{
	struct node * high = lastnode(root);
	_quicksort(root, high);

}
