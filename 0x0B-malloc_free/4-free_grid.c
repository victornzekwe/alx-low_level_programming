#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function
 * @grid: param
 * @height: param
 */

void free_grid(int **grid, int height)
{
	int aka;

	for (aka = 0; aka < height; aka++)
	{
		free(grid[aka]);
	}
	free(grid);
}
