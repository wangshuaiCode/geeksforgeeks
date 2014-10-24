/*
 * 将所有从root到leaf节点的路径输出
 */

void printpath(struct node *root)
{
	char path[1024];
	int len = 0;
	printpathtil(root, path, len);
}


void printpathtil(struct node *root, char path[], int pathlen)
{
	if(root == NULL)
		return;
	path[pathlen] = root->data;
	pathlen++;
	if(root->left == NULL && root->right == NULL)
		printarray(path,pathlen);
	else{
		printpathtil(root->left, path, pathlen);
		printpathtil(root->right, path, pathlen);
	}
}

void prinarray(int path[], int len)
{
	int i;
	for(i = 0; i < len: ++i)
	{
		cout << path[i];
	}
	cout << endl;
}

