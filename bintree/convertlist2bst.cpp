struct node *convertlist2bst(listnode *head)
{
	if(head == NULL)
	{
		return NULL;
	}
	queue<struct node *>q;
	struct node *root = newNode(head -> data);
	q.push(root);
	head = head -> next;
	while(head)
	{
		struct node *parent = q.front();
		q.pop();
		struct node *leftchild = newNode(head -> data);
		q.push(leftchild);
		head = head -> next;
		if(head)
		{
			struct node *rightchild = newNode(head -> data);
			q.push(rightchild);
			head = head -> next;
		}
		parent -> left = leftchild;
		parent -> right = rightchild;
	}
	return root;
}


struct node *convertlist2bst(struct listnode *head)
{
    if (head == NULL)
	return NULL;
    queue<struct node *>q;
    struct node *root = newNode(head->data);
    head = head->next;
    while(head)
    {
	struct node *parent = q.pop();
	struct node *leftchild = newNode(head->data);
	q.push(leftchild);
	head = head->next;
	if (head)
	{
	    struct node *rightchild = newNode(head->next);
	    q.push(rightchild);
	    head = head->next;
	}
	parent->left = leftchild;
	parent->right = rightchild;
    }
    return root;
}
