#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @array: Array of integers.
 * @i: Index of first element.
 * @j: Index of second element.
 */
void swap(int *array, size_t i, size_t j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}

/**
 * bubble_sort - Sorts an array of integers using Bubble sort algorithm.
 * @array: Array of integers to be sorted.
 * @size: Size of array.
 *
 * Description: If array is null or size is less than 2, function returns.
 * Iterates over array, swapping adjacent elements if they are in wrong order.
 * Iteration continues until no more swaps are made.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swapped;

	if (!array || size < 2)
		return;
	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] <= array[i + 1])
				continue;
			swap(array, i, i + 1);
			swapped = 1;
			print_array(array, size);
		}
	} while (swapped);
}
