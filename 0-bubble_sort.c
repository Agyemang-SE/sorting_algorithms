#include "sort.h"

/**
 * bubble_sort - function sorts an array of integers in ascending order
 * @array: the arrray input parameter
 * @size: the size of the array
 *
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j, temp;

for (i = 0; i < size; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j + 1] < array[j])
{
/* swap*/
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
