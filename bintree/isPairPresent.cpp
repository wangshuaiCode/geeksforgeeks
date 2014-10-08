//给定一个值sum，找出二叉树中的两个节点，并且两个节点的值的和为sum，时间复杂的为O（n）空间复杂度为O（logn），不可以改变原二叉树结构
bool isPairPresnet(struct node *root ,int sum)
{
	stack<struct node *>s1 ;
	stack<struct node *>s2;
	int val1 = val2 = 0;
	bool done1 = done2 = false;
	struct node *curr1 = root;
	struct node *curr2 = root;
	while(1)
	{
		while(done1 == false)
		{
			if(curr1 != NULL)
			{
				s1.push(curr1);
				curr1 = curr1 -> left;
			}
			else
			{
				if(s1.empty())
					done1 = true;
				else
				{
					curr1 = s1.pop();
					val1 = curr1 -> data;
					curr1 = curr1 -> right;
					done1 = true;
				}

			}
		}
		while(done2 = false)
		{
			if(curr2 != NULL)
			{
				s2.push(curr2);
				curr2 = curr2 -> right;
			}
			else
			{
				if(s2.empty())
					done2 = true;
				else
				{
					curr2 = s2.pop();
					val2 = curr2 -> data;
					curr2 = curr2 -> left;
					done2 = true;
				}
			}

		}
		if(val1 + val2 == sum)
			return true;
		else if(val1 + val2 < sum)
			done1 = false;
		else
			doen2 = false;
		if((curr1 == NULL && s1.empty()) || (curr2 == NULL && s2.empty()))
			return false;
	}

}
