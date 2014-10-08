//将同一level的节点连接起来
struct node {
	int data;
	struct node *left;
	struct node *right;
	struct node *nextright;    // 同一level的节点
}

void connect(struct node *root)
{
	root -> nextright = NULL;
	connectrecur(root);
	
}
void connectrecur(struct node *root)
{
	if(root == NULL)
		return;
	if(root -> left != NULL)
	{
		root -> left -> next = root -> right;
	}
	if(root -> right != NULL)
	{
		if(root -> rightnext)
			root -> right -> nextright = root -> rightnext -> left;
		else
			root -> right -> nextright = NULL;
	}
	connectrecur(root -> left);
	connectrecur(root -> right);


}
