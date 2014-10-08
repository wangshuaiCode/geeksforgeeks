//判断一棵树是否为完全二叉树
bool complete(struct node *root)
{
	queue<struct node *>q;
	int flags = false;
	q.push(root);
	while(!q.empty())
	{
		struct node *temp = q.front();
		q.pop();
		if(temp -> left)
		{
			if(flags == true)
			    return false;
		}
		else
			flags = true;
		if(temp -> right)
		{
			if(flags == true)
				return false;
		}
		else
			flags = true;
	}
	return true;
}
