int getcount(struct node * head)
{
	int count = 0;
	while(head  != NULL)
	{
		++count;
		head = head -> next; 
	}
	return count;
}
int thefirstcommon(struct node * head1, struct node * head2)
{
	int count1 = getcount(head1);
	int count2 = getcount(head2);
	if(count1 > count2)
	{
		int diff = abs(count1, count2);
		_thefirstcommon(head1, head2, diff);
	}
	else
	{
		int diff = abs(count2,count1);
		_thefirstcommon(head2, head1, diff);
	}

int _thefirstcommon(struct head1, struct head2, int diff)
{
	int count = diff;
	while(count != 0)
	{
		head1 = head1 -> next;
		--count;
	}
	while(head1 != NULL && head2 != NULL)
	{
		if(head1 -> data == head2 ->data)
		    return head1 -> data;
		else
		{
			head1 = head1 -> next;
			head2 = head2 -> next;
		}

	}
	
	return 0;
}

       
}
