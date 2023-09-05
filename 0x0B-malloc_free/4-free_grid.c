#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The number of rows in the grid.
 *
 * This function frees the memory for each row in the grid and the grid itself.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i < height ; i++)
free(grid[i]);

free(grid);

}
