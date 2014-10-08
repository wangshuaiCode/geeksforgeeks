//判断两个二叉树各层节点的值是否相同，可以左右节点颠倒，
bool issomric(struct node *head1,struct node *head2)
{
	if(head1 == NULL && head2 == NULL)
		return true;
	if(head1 == NULL || head2 == NULL)
		return false;
	if(head1 -> data != head2 -> data)
		return false;
	return (issomric(head1 -> left ,head2 -> left) && issomric(head1 -> right,head2 -> right)) || 
		(issomric(head1 -> left, head2 -> right) && issomric(head1 -> right, head2 -> left));
}
