struct node {
	int data;
	struct node *parent;
	struct node *left;
	struct node *right;
};

struct node *inorderSuccessor(struct node *root, struct node *n)
{
	if(n -> right != NULL)
		return minvalue(n -> right);
	struct node *p = n -> parent;
	while(p != NULL && n == p -> right)
	{
		n = p;
		p = n -> parent;
	}
	return p;
}

struct node *minvalue(struct node *root)
{
	struct node *current = root;

	while(current -> left != NULL)
	{
		current = current -> left;
	}
	
	return current;
}
