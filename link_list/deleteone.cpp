void deletenode(struct node * delete_node)
{
	struct node *temp = delete_node -> next;
	delete_node -> data = temp -> data;
	delete_node -> next = temp -> next;
	free(temp);
}

