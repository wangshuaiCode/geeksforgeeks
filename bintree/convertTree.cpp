/*
 * This function changes a tree to to hold children sum
 * property 
 */
void convert(struct node *root)
{
	if (root == NULL || (root->left == NULL && root->right == NULL))
	    return;
	int left_data, right_data;
	convert(root->left);
	convert(root->right);

	if (root->left) {
	    left_data = root->left->data;
	}

	if (root->right) {
	    right_data = root->right->data;
	}

	int diff = right_data + left_data - root->data;
	if (diff > 0) {
		root->data = root->data + diff;
	}
	if (diff < 0) {
		increament(root, -diff);
	}
	return ;
}


void increament(struct node *root, int diff)
{
	if (root->left != NULL) {
	    root->left->data = root->left->data + diff;
	    increament(root->left, diff);
	}
	else if(root->right != NULL) {
	    root->right->data = root->right->data + diff;
	    increament(root->right, diff);
	}

}
