/*
 * 计算二叉树中有多少节点
 */
int countsize(struct node *root)
{
	if (root == NULL)
	    return 0;
	return countsize(root->left) + countsize(root->right) + 1;
}
