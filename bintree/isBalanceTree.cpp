/*
 * 判断树是否为平衡树
 */

bool isBalanceTree(struct node *root)
{
	if (root == NULL)
	    return true;
	int left = height(root->left);
	int right = height(root->right);

	if (abs(left, right) <= 1 &&
		isBalanceTree(root->left) &&
		isBalanceTree(root->right))
		
		return true;



}

int height(struct node *root)
{
	if(root == NULL)
	    return 0;
	int left = height(root->left);
	int right = height(root->right);

	return (left > right) ? left + 1 : right + 1;
}


