#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array,
 * or NULL on failure.
 */
int *array_range(int min, int max)
{
int len = max - min + 1;
int *arr;
int i;

if (min > max)
return (NULL);

arr = (int *)malloc(len * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; i < len; i++)
arr[i] = min + i;

return (arr);
}
