void removeoutrange(struct node *root, int min, int max)
{
	if(root == NULL)
		return;
	root -> left = romoveoutrange(root -> left, min, max);
	root -> right = romoveoutrange(root -> right, min, max);
	if(root -> data > max)
	{
		struct node *child = root -> left;
		delete root;
		return child;
	}
	else if(root -> data < min)  
	{
		struct node *child = root -> right;
		delete root;
		return child;
	}
	else
	return root;
}
