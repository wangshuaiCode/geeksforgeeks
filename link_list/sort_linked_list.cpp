struct node {
	int data;
	struct node * next;
};

void sort_linked_list(struct node * head)
{
	int count[3] = {0,0,0};
	struct node * ptr = head;
	while(ptr != NULL)
	{
		count[ptr->data]++;
		ptr = ptr -> next;
	}

	int i = 0;
	ptr = head;
	while(ptr != NULL)
	{
		if(count[i] == 0)
			i++;
		else
		{
			ptr->data = i;
			count[i]--;
			ptr = ptr -> next;
			
		}
	}
}
