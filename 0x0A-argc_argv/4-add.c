#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the argument count
 * @argv: array of cmd args
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int i;
	long result = 0;
	char *endptr, *str;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		long tmp;

		errno = 0;
		str = argv[i];

		tmp = strtol(argv[i], &endptr, 10);

		/*
		*   printf("tmp %d\n", tmp);
		* printf("endptr is: %p, str is: %p\n", endptr,str);
		* printf("*endptr is: %c, *str is: %c\n", *endptr, *str);
		*
		* if (*endptr == '\0')
		*	printf("new line got\n");
		*/
		if ((endptr == str) || (errno != 0) || (*endptr != '\0'))
		{
			printf("Error\n");
			return (1);
		}

		result += tmp;
	}

	printf("%ld\n", result);
	return (0);

}
