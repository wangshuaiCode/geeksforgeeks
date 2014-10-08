bool printAncestor(struct node *root, int target)
{
	if(root == NULL)
		return false;
	if(root -> data == target)
		return true;
	if(printAncestor(root -> left, target) || printAncestor(root -> right, target))
	{
		cout << root -> data << endl;
		return true;
	}
	return false;
}
