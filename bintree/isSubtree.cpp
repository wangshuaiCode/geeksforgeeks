bool isidentical(struct node *head1,struct node *head2)
{
	if(head1 == NULL && head2 == NULL)
		return true;
	if(head1 == NULL || head2 == NULL)
		return false;
	return head1 -> data == head2 -> data &&isidentical(head1 -> left, head2 -> left) && isidentical(head1 -> right, head2 -> right);
}


bool isSubtree(struct node *head1, struct node *head2)
{
	if(head1 == NULL)
		return false;
	if(head2 == NULL)
		return false;
	if(isidentical(head1, head2))
		return true;
	return isSubtree(head1 -> left, head2) || isSubtree(head1 -> right, head2);

}




