//寻找一个二叉树中，是否有一组三个节点的data值的和未0
bool isTripletPresent(node *root)
{
	if(root == NULL)
	    return false;
	struct node *head = NULL;
	struct node * tail = NULL;
	convert2dll(root, &head, &tail);
	while(head -> right != tail && head -> data < 0)
	{
		if(isFindvalue(head, tail, -1 * head -> data))
			return true;
		else
			head = head -> right;
	}

	return false;
}

bool isFindvalue(struct node *head, struct node *tail, int value)
{
	while(head != tail)
	{
		if(head -> data + tail -> data == value)
			return true;
		else if(head -> data + tail -> data > value)
			tail = tail -> left;
		else 
			head = head -> right;
	}
	return false;
}
