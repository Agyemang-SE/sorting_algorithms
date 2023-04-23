#include "sort.h"

/**
 * selection_sort - function sorts an array in ascending order
 * @array: the array elements
 * @size: size of the array
 * 
 * Return: nothing
*/

void selection_sort(int *array, size_t size)
{
size_t i, j;

for (i = 0; i < size - 1; i++)
{
for (j = i + 1; j < size; j++)
{
if (array[i] > array[j])
{
swap(&array[i], &array[j]);
}
}
print_array(array, size);
}
}
