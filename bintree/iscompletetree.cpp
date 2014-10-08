bool iscomplete(struct node *root)
{
	if(root == NULL)
		return true;
	queue<struct node *>q;
	q.push(root);
	int flags = false;
	while(!q.empty())
	{
		struct node *temp = q.front();
		q.pop();
		if(temp -> left)
		{
			if(flags == true)
				return false;
			q.push(temp -> left);
		}
		else
		{
			flags == true;
		}
		if(temp -> right)
		{
			if(flags == true)
				return false;
			q.push(temp -> right);
		}
		else
		{
			flags = true;
		}

	}
	return true;
}


