int partition(int a[], int low, int high)
{
	int key = a[high];
	int i = low - 1;
	for(int j = low; j < high; j++)
	{
		if(a[j] < key)
		{
		    i++;
		    swap(a[i],a[j]);
		}
	}
	int temp = a[i+1];
	a[i+1] = a[high];
	a[high] = temp;
	return (i+1);
}

void quicksort(int a[], int low, int high)
{
	if(low < high)
	{
		int len = partition(a, low, high);
		quicksort(a, low, len -1);
		quicksort(a, len + 1, high);
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


