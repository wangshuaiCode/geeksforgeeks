bool isDentical(struct node *root, struct node *root2)
{
	if (root == NULL && root2 == NULL)
	    return true;
	else if (root != NULL && root2 != NULL) {
	    return root->data == root2->data &&
		    isDentical(root->left, root2->left) &&
		    isDentical(root->right, root2->right);
	}
	else
	    return 0

}
