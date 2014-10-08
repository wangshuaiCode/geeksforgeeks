//二叉树中的节点带有一个next指针，该指针指向中序遍历的后继结点
struct node {
	int data;
	struct node *next;
	struct node *left;
	struct node *right;
};
void populateNode(struct node *root)
{
	static struct node * next = NULL;
	if(root)
	{
		populateNode(root -> right);
		root -> next = next;
		next = p;
		populateNode(root -> left);
	}

}
