void levelorder(struct node *root)
{
	queue<struct node *>q;
	q.push(root);
	struct node *temp;
	while(!q.empty())
	{
		temp = q.front();
		cout << temp -> data;
		dequeue(q);
		if(temp -> left != NULL)
			q.push(temp -> left)
		if(temp -> right != NULL)
			q.push(temp -> right);

			
	}

}

void printlevelorder(struct node *root)
{
    int h = height(root);
    int i;
    for(i = 1; i <= height; ++i)
    {
	printGivenlevel(root, i);
    }

}

void printGivenlevel(struct node *root, int level)
{
    if (root == NULL)
	return;
    if (level == 1)
	cout << root->data;
    else if (level > 1)
    {
	printGivenlevel(root->left, level - 1);
	printGivenlevel(root->rihgt, level - 1);
    }
}

int height(struct node *root)
{
    if (root = NULL)
	return 0;
    int left = height(root->left);
    int right = height(root->right);
    return (left > right) ? left + 1 : right + 1;
}
