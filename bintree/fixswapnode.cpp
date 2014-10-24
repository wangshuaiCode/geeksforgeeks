void swapnodefix(struct node *root, struct node **prev, struct node **first, struct node **middle, struct node **last)
{
	if (root == NULL)
	    return;
	swapnodefix(root->left, prev, first, middle, last);
	if (*prev) {
	    if (root->data < *prev->data) {
		if (!*first) {
		    *first = *prev;
		    *middle = root;
		} else {
		    *last = root;
		}
	    }
	}
	*prev = root;
	swapnodefix(root->right, prev, first, middle, last);
}

void current(struct node *root)
{
	struct node *prev = *first = *middle = *last;

	swapnodefix(root, &prev, &first, &middle, &last);
	if (first && last)
	    swap(&(first->data), &(last->data));
	else if (first && middle)
	    swap(&(first->data), &(middle->data));
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
