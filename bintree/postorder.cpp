struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
struct btnode{
	struct Node *node;
	bool isFirst;
}

void postorder(struct Node *root)
{
	stack<struct btnode*>s;
	struct btnode *temp;
	struct Node *p = root;
	while(!s.empty() && p != NULL)
	{
		while(p != NULL)
		{
			struct btnode *btn = (struct btnode *)malloc(sizeof(struct btnode));
			btn -> node = p;
			btn -> isFirst = true;
			s.push(btn);
			p = p -> left;
		}
		if(!s.empty)
		{
			temp = s.top();
			s.pop();
			if(temp -> isFirst == true)
			{
				temp -> isFirst = false;
				s.push(temp);
				p = temp -> node -> right;
			}
			else
			{
				cout << temp -> node -> data;
				p = NULL;
			}
		}
	}
}

