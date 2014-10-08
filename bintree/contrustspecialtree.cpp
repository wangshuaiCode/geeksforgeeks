struct node *contrust(int a[], int pre[],int *index_ptr, int n)
{
	int index = *index_ptr;
	if(index == NULL)
		return NULL;
	struct node *temp = newNode(a[index]);
	++(*index_ptr);
	if(pre[index] == 'N')
	{
		temp -> left = contrust(a, pre, index_ptr, n);
		temp -> right = contrust(a, pre, index_ptr, n);
	}
	return temp;
}
