/*
 * 删除整棵二叉树
 */
void deleteTree(struct node *root)
{
	if (root == NULL)
	    return;
	deleteTree(root->left);
	deleteTree(root->right);
	cout << "the node->data:" << root->data << endl;
	free(root);
}
