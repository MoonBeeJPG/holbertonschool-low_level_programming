#include <stdlib.h>
#include "main.h"
/**
* free_grid - a function that frees a 2 dimensional grid previously created
* @grid: grididi
* @height: height
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
