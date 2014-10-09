/*
 * Question: Given a binary tree, find out if the tree can be folded or not.
 * A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each
 * other. An empty tree is considered as foldable
 *
 */
bool isFoldabletil(struct node *root1, struct node *root2)
{
	if(root1 == NULL && root2 == NULL)
		return true;
	if(root1 == NULL || root2 == NULL)
		return false;
	return isFoldabletil(root1 -> left, root2 -> right) &&
		isFoldabletil(root -> right, root2 -> left);
}

bool isFoldable(struct node *root)
{
	if(root == NULL)
		return true;
	return isFoldabletil(root -> left, root -> right);
}
