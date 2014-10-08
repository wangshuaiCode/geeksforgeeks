// 判断一个二叉树是否为sumtree，sum tree为一个节点的值是其左子树的和+右子树的和
int sum(struct node *root)
{
	if(root == NULL)
		return 0;
	return sum(root -> left) + root -> data + sum(root -> right);
}


bool isSumtree(struct node *root )
{
	int lsum = rsum = 0;
	if(root == NULL)
		return true;
	if(root -> left == NULL && root -> right == NULL)
		return true;
	lsum = sum(root -> left);
	rsum = sum(root -> right);
	if(root -> data == lsum + rsum && isSumtree(root -> left) && isSumtree(root -> right))
		return true;
}
