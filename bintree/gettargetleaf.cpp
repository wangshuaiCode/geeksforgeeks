void gettargetleaf(struct node *root, int *max_sum_ref,int curr_sum, struct node **target_leaf)
{
	if(root == NULL)
		return NULL;
	curr_sum += root -> data;
	if(root -> left == NULL && root -> right == NULL)
	{
		if(curr_sum > *max_sum_ref)
		{
			*max_sum_ref = curr_sum;
			*target_leaf = root;
		}
	}
	gettargetleaf(root -> left, max_sum_ref, curr_sum, targetleaf);
	gettargetleaf(root -> right, max_sum_ref, curr_sum, targetleaf);
	

}
