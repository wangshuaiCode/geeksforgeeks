struct node {
	int data;
	struct node * right;
	struct node * down;
};

struct node * merge(struct node * head1, struct node * head2)
{
	if(head1 == NULL)
	    return head2;
	if(head2 == NULL)
	    return head1;
	struct node * result = NULL;
	if(head1 -> data < head2 -> data)
	{
		result = head1;
	       result -> down = merge(head1 -> down, head2);
	}
	else
	{
		result = head2;
	       result -> down = merge(head1, head2 -> down);
	       
	}
}

void flatten(struct node * root)
{
	if(root == NULL || root -> right == NULL )
	    return root;
	   return merge(root, flatten(root -> right));
}

