//特殊的二叉树，每个节点的值都要比他的左右子节点的值大
struct node *contrust(int a[] , int min, int max)
{
	if(min > max)
		return NULL;
	int index = max(a, min, max);
	struct node *root = newNode(a[index]);
	if(max == min)
		return root;
	root -> left = contrust(a, min, index - 1);
	root -> right = contrust(a, index + 1, max)
	return root;
}

int max(int a[], int start, int end)
{
	int i, max = a[start], maxindex = start;
	for(i = start + 1; i < end; i++)
	{
		if(a[i] > max)
		{
			maxindex = i;
			max = a[i];
		}
	}
	return maxindex;
}
