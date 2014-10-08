void addGreaternil(struct node *root, int *sum)
{
        if(root = NULL)
		return;
	addGreaternil(root -> right,sum);
	*sum = *sum + root -> data;
	root -> data = *sum;
	addGreaternil(root -> left, sum);
}
void addGreater(struct node *root)
{
    int sum = 0;
    addGreaternil(root, &sum);
}
