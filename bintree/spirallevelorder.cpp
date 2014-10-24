int height(struct node *root)
{
	if(root == NULL)
		return 0;
	int left = height(root->left);
	int right = height(root->right);
	return (left > right) ?  left + 1 : right + 1;
}

void printGivenlevel(struct node *root, int level, bool isLeft)
{
	if (root == NULL)
		return NULL;
	if(level == 1)
		cout << root->data;
	else if (level > 1) {
		if (isLeft) {
			printGivenlevel(root->left, level - 1, isLeft);
			printGivenlevel(root->right, level - 1, isLeft);
		} else {
			printGivenlevel(root->right, level - 1, isLeft);
			printGivenlevle(root->left, level - 1, isLeft);
		}

	}
}

void levelorder(struct node *root)
{
	int h = height(root);
	int i;
	bool isLeft = false;
	for(i = 0; i <= h; ++i)
	{
		printGivenlevel(root, i, isLeft);
		isLeft = ~isLeft;
	}
		
}
