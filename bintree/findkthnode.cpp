struct node *findKthnode(struct node *root, int k)
{
	stack<struct node *>s;
	struct node *temp = root;
	while(temp != NULL)
	{
		s.push(temp);
		temp = temp -> left;
	}
	while(!s.empty())
	{
		temp = s.top();
		s.pop();
		if(!--k)
			break;
		if(temp -> right)
		{
			temp = temp -> right;
			while(temp != NULL)
			{
				s.push(temp);
				temp = temp -> left;
			}
		}
			
	}
	return temp;
}

struct node *findKthnode(struct node *root, int k)
{
	stack<struct node*>s;
	struct node *temp = root;
	while(temp != NULL)
	{
		s.push(temp);
		temp = temp -> left;
	}
	while(!s.empty())
	{
		temp = s.top();
		s.pop();
		if(!--k)
			break;
		if(temp -> right)
		{
			temp = temp -> right;
			s.push(temp);
			temp = temp -> left;
		}
	}
}
struct node *findKthnode(struct node *root, int k)
{
	stack<struct node *>s;
	struct node *temp = root;
	while(!s.empty() || !temp)
	{
		while(temp != NULL)
		{
		    s.push(temp);
		    temp = temp -> left;
		}
		if(!s.empty())
		{
			temp = s.top();
			s.pop();
			k--;
			if(k == 0)
				break;
			temp = temp -> right;

		}
	}
}
