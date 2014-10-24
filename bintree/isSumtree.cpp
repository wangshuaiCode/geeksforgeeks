/*
 * Given a binary tree, write a function that returns true if the tree satisfies below property.
 * For every node, data value must be equal to sum of data values in left and right children. Consider
 * data value as 0 for NULL children. Below tree is an example
 */
bool isSumtree(struct node *root)
{
	if(root == NULL || (root->left = root->right) == NULL )
		return 1;
	int left_data = 0, right_data = 0;
	if(root->left != NULL)
		left_data = root->left->data;
	if(root->right != NULL)
		right_data = root->right->data;
	if (root->data == left_data + right_data && 
	    isSumtree(root->left) &&
	    isSumtree(root->right))
		return 1;
	else 
		return 0;
	    
    
		
}
