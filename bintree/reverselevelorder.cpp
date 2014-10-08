void reverselevelorder(struct node *root)
{
	stack<struct node *> s;
	queue<struct node *>q;
	q.push(root);
	struct node *temp = NULL;
	while(!q.empty())
	{
		temp = q.front();
		q.pop();
		s.push(temp);
		if(temp -> right != NULL)
			q.push(temp -> right);
		if(temp -> left != NULL)
			q.push(temp -> left);
	}
}
