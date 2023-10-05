#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - frees the memory allocate for the grid
 * @ac: grid to free
 * @av: height of the grid
 * Return: grid
 */
char *argstostr(int ac, char **av)
{
	char *result;
	char **v = av;
	int total_size,  j, tmp, i = ac, len, size = 0;

	if (!(ac && av))
		return (NULL);
	while (i--)
	{
		len = (int) strlen(*v);
		 size += len;
		v++;
	}
	total_size = size + ac + 1;
	result = (char *) malloc(sizeof(char) * total_size);

	if (!result)
		return (NULL);
	i = 0;
	while (ac--)
	{
		tmp = strlen(*av);
		for (j = 0; j < tmp; j++)
		{
			result[i] = (*av)[j];
			i++;
		}

		result[i] = '\n';
		i++;
		av++;
	}
	result[total_size - 1] = '\0';

	return (result);
}
