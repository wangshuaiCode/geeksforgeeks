struct Node {
	int data;
	struct Node *left;
	struct Node *right;
}
struct btnode{
	struct Node *node;
	bool isFirst;
}

void postorder(strcut Node *root)
{
	stack<struct btnode *> s;
	struct Node * p = root;
	struct btnode *temp; 
	while(!s.empty() && p != NULL)
	{
		struct btnode * bt = (struct btnode *)malloc(sizeof(struct btnode));
		bt -> node = p;
		bt -> isFirst = true;
		s.push(bt);
		p = p -> left;
	}
	if(!s.empty())
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


