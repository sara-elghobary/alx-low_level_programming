#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an
 * array using a custom comparison function.
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the custom comparison function.
 *
 * This function searches for an integer in the
 * given 'array' by applying the 'cmp' comparison
 * function to each element. It returns the index
 * of the first element for which the 'cmp'
 * function does not return 0. If no element matches
 * or 'size' is non-positive, it returns -1.
 *  * Return:
 * If a non-matching element is found, the index of the
 * first such element is returned.
 * If no non-matching element is found or 'size' is
 * non-positive, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
if (size <= 0)
return (-1);

for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
