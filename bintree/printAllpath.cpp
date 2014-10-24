void printAllpath(struct node *root)
{
	char path[1024];
	int len = 0;
	printAllpathtil(root, path, len);
}

void printAllpathtil(struct node *root, char path[], int len)
{
	if (root == NULL)
	    return;
	path[len] = root->data;
	len++;
	if (root->left == NULL && root->right == NULL) {
	    printarry(path, len);
	} else {
	    printAllpathtil(root->left, path, len);
	    printAllpathtil(root->right, path, len);
	}
}


