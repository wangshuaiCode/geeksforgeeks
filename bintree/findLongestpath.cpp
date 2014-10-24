/*
 * 给定一颗二叉树，寻找距离最远的两个节点的距离
 */

int findLongest(struct node *root)
{
	if(root == NULL)
		return 0;
	int lheight = height(root->left);
	int rheight = height(root->right);

	int l = findLongest(root->left);
	int r = findLongest(root->right);

	return max(lheight + rheight + 1, max(l, r));
}

int height(struct node *root)
{
	if(root == NULL)
		return 0;
	int left = height(root->left);
	int right = height(root->right);

	return (left > right) ? left + 1 : right + 1;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

/*
 * second solution
 */
int findLongest(struct node *root, int *height)
{
	int lheight = rheight = 0;
	int l = r = 0;
	if(root == NULL)
		*height = 0;
	l = findLongest(root->left,&lheight);
	r = findLongest(root->right, &rheight);

	*height = max(*lheight, *rheight) + 1;

	return max(lheight + rheight + 1, max(l,r));
}
 
