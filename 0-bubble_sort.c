#include "sort.h"

/**
 * swap_ints - swap integerd in an arrary
 * @a: First integer to swap.
 * @b: Second integer to swap
 **/
void swap_ints(int a, int b)
{
	int temp;

	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
}

/**
 * bubble_sort - sort an array in ascending order.
 * @array: Array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap correctly.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len;

	if (array == NULL || size < 2)
		return;

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	/* run through array left to right */
	for (i = 0; i < size; i++)
	{
		/* run through array right to left */
		for (len = size; len > i; len--)
		{

			/* comparison function */
			swap_ints(array[len - 1], array[len]);
			print_array(array, size);
		}
	}
}
