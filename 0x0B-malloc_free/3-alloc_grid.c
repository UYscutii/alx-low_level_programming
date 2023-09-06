#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **tab;

	tab = malloc(sizeof(*tab) * height);
	if (height <= 0 || width <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
	{
			tab[i] = malloc((sizeof(**tab) * width));
			if (tab[i] == 0)
	{
		while (i--)
		free(tab[i]);
		free (tab);
		return (NULL);
	}
		 for (j = 0; j < width; j++)
	}	 tab[i][j] = 0;
	}
	return (tab);
}
