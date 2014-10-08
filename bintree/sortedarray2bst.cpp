struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct ndoe *sorted2bst(int a[],int min, int max)
{
	if(min > max)
		return NULL;
	int mid = (min + max )/ 2;
	struct node *root = newNode(a[mid]);
	root -> left = sorted2bst(a, min, min - 1);
	root -> right = sorted2bst(a, mid + 1, max);
	return root;
}

