/*
 * 已知二叉树的先序遍历和中序遍历，求出二叉树的结构
 */

struct node *buildtree(int pre[], int in[], int start, int end)
{
	if(start > end)
	    return NULL;
	static int preindex = 0;
	struct node *root = newNode(pre[preindex++]);

	if(start == end)
	    return root;
	int index = search(in[], start, end, root->data);

	root->left = buildtree(pre, in, start, index - 1);
	root->right = buildtree(pre, in, index + 1, end);

	return root;
}



