#include "sort.h"

/**
* bubble_sort - sorts an array of integers
* in ascending order using Bubble sort
* @array: the array of integers to sort
* @size: number of elements in the array
*/
void bubble_sort(int *array, size_t size)
{
	int temp, swapped;
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
