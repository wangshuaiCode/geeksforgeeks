void inorder(struct node *root)
{
	struct node * p = root;
	stack<struct node *>s ;
	while(p != NULL && !s.empty())
	{
		while(p != NULL)
		{
			s.push(p);
			p = p -> left;
		}
		if(!s.empty())
		{
			p = s.top();
			cout << p -> data;
			s.pop();
			p = p -> right;
		}
	}
}
