/*
 * 给定一棵二叉树，求叶子节点有多少
 */
struct node {
	int data;
	struct node *left;
	struct node *right;
}

int countLeafnode(struct node *root)
{
	if(root == NULL)
		return 0;
	if(root->left == NULL && root->right == NULL)
		return 1;
	return countLeafnode(root->left) + countLeafnode(root->right);
}
