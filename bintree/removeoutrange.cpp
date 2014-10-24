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

struct node *removeoutofrange(struct node *root, int min, int max)
{
    if (root == NULL)
	return NULL;
    root->left = removeoutofrange(root->left, min, max);
    root->right = removeoutofrange(root->right, ming, max);

    if (root->data < min)
    {
	struct node *rightleft = root->right;
	free(root);
	return childright;
    }
    else if (root->data > max)
    {
	struct node *childleft = root->left;
	free(root);
	return childleft;
    }
    else 
	return root;
}
