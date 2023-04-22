#ifndef SORT_H
#define SORT_H
<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 **/
typedef enum bool
{
		false = 0,
			true
} bool;

=======
>>>>>>> c517255f16b83b918215650f39ee083c652ad7d7
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
<<<<<<< HEAD
 **/
=======
 */
>>>>>>> c517255f16b83b918215650f39ee083c652ad7d7
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
<<<<<<< HEAD

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
=======
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
>>>>>>> c517255f16b83b918215650f39ee083c652ad7d7
