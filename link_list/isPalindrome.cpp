bool isPlindrome(struct node ** left, struct node * right)
{
	if(right == NULL)
	    return true;
	bool istrue = isPlindrome(left, right -> next);
	if(istrue == false)
	    return false;
	bool is = (right -> data == (*left) -> data);
	*left = (*left) -> next;
	return is;
}
