struct node *prepostorder(int pre[], int post[], int * index,int l, int h, int size)
{
	if(l > h || *index > size)
	{
		return NULL;
	}
	struct node * root = newNode(pre[*index]);
	++*index;
	if(l == h)
	    return root;
	int i;
	for(i = l; i< h;++i)
	{
		if(pre[*index] == post[i])
			break;
	}
	if(i <= h)
	{
		root -> left = prepostorder(pre,post,index,l,i,size);
		root -> right = prepostorder(pre,post,index,i+1,h,size);
	}
	return root;
}
