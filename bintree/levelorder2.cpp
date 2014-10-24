void printlevel(struct node *node, int level)
{
	if(node == NULL)
		return;
	if(level == 1)
		cout << node->data;
	else if(level > 1) {
		printlevel(node->left, level - 1);
		printlevel(node->right, level - 1);
	}
}

void levelorder(struct node *root)
{
	int h = height(root);
	int i;
	for(i = 1; i <= h; ++i)
	{
		printlevel(root, level);
	}
	return;
}

void mirror(struct node *root)
{
	if(root == NULL)
		return;
	 mirror(root->left);
	 mirror(root->right);

	struct node temp;
	temp = *root->right;
	*root->right = *root->left;
	*root->left = temp;
}
