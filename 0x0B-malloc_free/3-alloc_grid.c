#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - checks for uppercase character
 * @width: arr size
 * @height: string 2
 * Return: 1 if c is uppercase, 0 otherwise
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width && height)
	{
		arr = (int **) malloc(sizeof(int *) * height);
		if (!arr)
			return (NULL);

		while (i < width)
		{
			j = 0;
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (!arr[i])
				return (NULL);
			while (j < height)
			{
				arr[i][j] = 0;
				j++;

			}

			i++;
		}

		return (arr);
	}
	else
		return (NULL);
}


