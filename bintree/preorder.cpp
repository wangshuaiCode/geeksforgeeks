void preorder(struct node *root)
{
	struct node *p = root;
	stack<struct node *> s;
	while(p != NULL && !s.empty())
	{
		while(p != NULL)
		{
			cout << p -> data;
			s.push(p);
			p = p -> left;
		}
		if(!s.empty())
		{
			p = s.top();
			s.pop();
			p = p -> right;
		}
	}
}
