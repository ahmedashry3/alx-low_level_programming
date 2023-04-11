#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 Dimensional array of integers.
* @grid: The 2D Dimensional array of integers to be freed.
* @height: Height of grid.
*/
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
