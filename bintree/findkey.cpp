int findkey(struct node *root, int input)
{
	if(root -> data == input)
		return root -> data;
	if(root -> data > input)
		findkey(root -> left);
	else
		findkey(root -> right);
}
