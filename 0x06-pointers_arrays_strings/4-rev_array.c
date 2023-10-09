/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to the array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, i, last_index;

	for (i = 0; i < n / 2; i++)
	{
		last_index = n - i - 1;	/* index of the element to swap with */
		temp = a[i];
		a[i] = a[last_index];
		a[last_index] = temp;
	}
}
