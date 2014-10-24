int FindLowestCommonAncestor(struct node *root, int value1, int value2)
{
	if (root == NULL || root->data == value1 || root->data == vlaue2)
	    return -1;
	if (root->left != NULL)
	    if (root->left->data == value1 || root->right->data == value2)
		return root->data;
	if (root->right != NULL)
	    if (root->right->data == value1 || root->right->data == value2 )
		return root->data;


	if (root->data > value1 && root->data > value2)
	    return FindLowestCommonAncestor(root->left, value1, value2);
        if (root->data < value1 && root->data < value2)
	    return FindLowsetCommonAncestor(root->right, value1, value2);
}
