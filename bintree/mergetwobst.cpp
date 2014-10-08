void mergetwobst(struct node *head1,struct node *head2)
{
	if(head1 == NULL)
	{
		inorder(head2);
		return;
	}
	if(head2 == NULL)
	{
		inorder(head1);
		return;
	}
	struct node *current1 = head1;
	stack<struct node *>s1;
	struct node *current2 = head2;
	stack<struct node *>s2;
	while(current1 != NULL || current2 != NULL || !s1.empty() || !s2.emtpy() )
	{
		if(current1 != NULL || current2 != NULL)
		{
			if(current1 != NULL)
			{
				s1.push(current1);
				current1 = current1 -> left;
			}
			if(current2 != NULL)
			{
				s2.push(current2);
				current2 = current2 -> left;
			}
		}
		else
		{
			if(s1.emtpy())
			{
				while(!s2.empty())
				{
					current2 = s2.pop();
					current2 -> left = NULL;
					inorder(current2);
				}
				return;
			}
			if(s2.empty())
			{
				while(!s1.empty())
				{
					current1 = s1.pop();
					current1 -> left = NULL;
					inorder(current1);
				}
				return;
			}             
			current1 = s1.pop();
			current2 = s2.pop();
			if(current1 -> data < current2 -> data)
			{
				cout << current1 -> data;
				current1 = current1 -> right;
				s2.push(current2);
				currnet2 = NULL;
			}
			else
			{
				cout << current2 -> data;
				current2 = current2 -> right;
				s1.push(current1);
				current1 = NULL;
			}
			
		}
	}
}

void inorder(struct node *root)
{
	if(root != NULL)
	{
		inorder(root -> left);
		cout << root -> data;
		inorder(root -> right);

	}
}
