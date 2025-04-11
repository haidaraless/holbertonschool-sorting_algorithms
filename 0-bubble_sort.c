#include <stdio.h>

/**
* bubble_sort - sorts an array of integers in
* ascending order using the Bubble Sort algorithm.
* @array: a pointer to the array of integers.
* @size: the size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	int temp;
	int swapped;

	for (size_t i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				for (size_t k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k < size - 1)
						printf(" ");
				}
				printf("\n");

				swapped = 1;
			}
		}

		if (!swapped)
			break;
	}
}
