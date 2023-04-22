#include "sort.h"

/**
 * swap_ints - swap integerd in an arrary
 * @a: First integer to swap.
 * @b: Second integer to swap
 **/
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
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
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	i = 0;
	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
