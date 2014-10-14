/*
 * Given a tree and a sum, return true if there is a path from the root
 * down to a leaf, such that adding up all the values along the path
 * equals the given sum.
 */
bool isPathSum(struct node *root, int sum)
{
	if (root == NULL) {
	    return (sum == 0);
	} else {
	    bool istrue = false;
	    int subsum = sum - root->data;
	    if((subsum == 0) && root->left == root->right == NULL)
		return 1;
	    if (root->left)
		istrue = istrue || isPathSum(root->left, subsum);
	    if (root->right)
		istrue = istrue || isPathSum(root->right,subsum);
	    return istrue;
	}
}
