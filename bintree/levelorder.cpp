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
