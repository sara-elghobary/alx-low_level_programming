#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed on each array element.
 *
 * This function iterates through each element of the integer array pointed
 * to by 'array' and applies the specified 'action' function to each element.
 * The 'size' parameter specifies the number of elements in the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
}
