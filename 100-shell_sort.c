#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort - sorts an array of integers in ascending order using the Shell
 * sort algorithm, using the Knuth sequence
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing (void)
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		i = gap;
		while (i < size)
		{
			for (j = i; j >= gap && array[j - gap] > array[j]; j -= gap)
				swap(array + j, array + (j - gap));
			i++;
		}
		print_array(array, size);
	}
}
