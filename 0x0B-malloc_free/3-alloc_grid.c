#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: Width of the array (i.e. columns)
 * @height: Height of the array (i.e. rows)
 *
 * Return: A pointer to a 2-dimensional array of integers, or null on failure.
 * The array is zero-initialized.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	/* return NULL if width or height is negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocate memory for an array of pointers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* allocate memory for each row and prevent memory leak */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	/* initialize array with 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
