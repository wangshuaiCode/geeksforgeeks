struct node * contrust(int pre, int *index, int l, int h,int size)
{
	if(l > h || *index > size)
		return NULL;
	struct node * root = newNode(pre[*index]);
	*index = *index + 1;
	if(l == h)
	    return root;
	int i;
	for(i = l; i <= h; i++)
	{
		if(pre[i] > root -> data)
		    break;
	}
	root -> left = contrust(pre, index, *index, i - 1, size);
	root -> right = contrust(pre, index, i, h, size);
	return root;

}

