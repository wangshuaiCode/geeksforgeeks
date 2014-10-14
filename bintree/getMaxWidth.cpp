int height(struct node *root)
{
	if (root == NULL)
	    return 0;
	int left = height(root->left);
	int right = height(root->right);

	return (left > right) ? (left + 1) : (right + 1);
}


void getMaxWidthrec(struct node *root, int count[], int level)
{
	if (root) {
	    count[level]++:
	    getMaxWidthrec(root->left, count, level + 1);
	    getMaxWidthrec(root->right, count, level + 1);
	}
}


int getMaxWidth(struct node *root)
{
    int h = height(root);

    int *count = (int *) calloc(sizeof(int), h);

    int level = 0;
    getMaxWidthrec(root, count, level);

    return getMax(h, count);
}

