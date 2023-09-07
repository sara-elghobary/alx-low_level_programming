#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size to allocate in bytes.
 *
 * Return: Pointer to the newly allocated memory block.
 *         NULL if new_size is 0 and ptr is not NULL (memory freed).
 *         NULL if malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
return (malloc(new_size));
}
else if (new_size == old_size)
{
return (ptr);
}
else
{
void *new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}

if (new_size < old_size)
{
memcpy(new_ptr, ptr, new_size);
}
else
{
memcpy(new_ptr, ptr, old_size);
}

free(ptr);

return (new_ptr);
}
}
