#include "sort.h"
#include <stdio.h>

/**
* lomuto_partition - Lomuto partition scheme to find the pivot element.
* @array: The array to sort.
* @low: The starting index.
* @high: The ending index.
* @size: Size of the array.
* Return: The index of the pivot.
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int temp;
int j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
return (i + 1);
}

/**
* quick_sort_recursive - Sorts the array using Quick sort recursively.
* @array: The array to sort.
* @low: The starting index.
* @high: The ending index.
* @size: Size of the array.
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{

if (low < high)
{
int pivot_index = lomuto_partition(array, low, high, size);

quick_sort_recursive(array, low, pivot_index - 1, size);
quick_sort_recursive(array, pivot_index + 1, high, size);
}
}

/**
* quick_sort - Sorts an array of integers in ascending order.
* @array: The array to sort.
* @size: The size of the array.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
