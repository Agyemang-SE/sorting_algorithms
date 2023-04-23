#include "sort.h"

/**
 * swap - function swaps an array
 * @array1: first array
 * @array2: second arrray
 * 
 * Return: nothing
*/

void swap(int *array1, int *array2)
{
    int temp;
    temp = *array1;
    *array1 = *array2;
    *array2 = temp;
}
