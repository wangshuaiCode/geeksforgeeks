void convert2dll(struct node *root, struct node **head, struct node **tail)
{
	if(root == NULL)
		return ;
	convert2dll(root -> left, head, tail);
	root -> left = *tail;
	if(*tail != NULL)
		*tail -> right = root;
	else
		*head = root;
	*tail = root;
	convert2dll(root -> right, head, tail);

}

    
