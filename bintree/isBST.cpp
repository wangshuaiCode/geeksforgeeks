/*
 *判断给定的一棵树是否为二叉搜索树
 */
bool isBST(struct node *root)
{
	bool a = isBSTtil(root, INT_MIN, INT_MAX);
	return a;
}

bool isBSTtil(struct node *root, int min, int max)
{
	if(root == NULL)
		return true;
	if(root->data < min || root->data > max)
		return false;
	return  isBsttil(root->left, min, root->data - 1) &&;
		isBSTtil(root->right, root->data + 1, max);
}
