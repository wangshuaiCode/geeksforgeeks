int getlevelnil(struct node *root, int data, int level)
{
	if(root == NULL)
		return 0;
	if(root -> data == data)
		return level;
	return getlevelnil(root -> left, data, level + 1) 
		|| getlevelnil(root -> right, data, level + 1);
}

int getlevel(struct node *root , int data)
{
	return getlevelnil(root, data, 1);
}
