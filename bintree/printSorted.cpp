/*
 * Given an array that stores a complete Binary Search Tree, write a function that efficiently prints the
 * given array in ascending order.
 * For example, given an array [4, 2, 5, 1, 3], the function should print 1, 2, 3, 4, 5
 *
 */
void printSorted(int array[], int start, int end)
{
	if(start > end)
		return;
	 printSorted(array, start * 2 + 1, end);

	 cout << array[start] << endl;

	 printSorted(array, start * 2 + 2, end);
}
