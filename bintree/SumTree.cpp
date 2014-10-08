//转换二叉树，将每个树节点转换为左右子树以及左右子节点原来的值的和
int SumTree(struct node *root)
{
	if(root == NULL)
		return 0;
	int olddata = root -> data;
	root -> data = SumTree(root -> left) + SumTree(root -> right);
	return olddata + root -> data;
}
