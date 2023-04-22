#include "sort.h"
#include <stdbool.h>

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
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (len = size - 1; len > i; len--)
		{
			if (array[len] < array[len - 1])
			{
				temp = array[len - 1];
				array[len - 1] = array[len];
				array[len] = temp;
			}
			print_array(array, size);
		}
	}
}
