/*
 *Given a root of a tree, and an integer k. Print all the nodes which are at k distance from root


 */
void printKdistant(struct node *root, int k)
{
	if(root == NULL)
		return;
	if(k == 0)
		cout << root -> data << endl;
	else{
		printKdistant(root -> left, k - 1);
		printKdistant(root -> right, k - 1);
	}
}


