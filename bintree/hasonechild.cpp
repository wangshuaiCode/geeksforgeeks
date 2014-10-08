//给定一个二叉树的前序遍历的数组，判断是否每个节点都只有一个孩子
bool hasonechild(int pre[], int size)
{
	for(int i = 0; i < size; i++)
	{
		int a = pre[i] - pre[i +1];
		int b = pre[i] - pre[size];
		int c = a * b;
		if(c < 0)
		    return false;
	}
	return true;
}
