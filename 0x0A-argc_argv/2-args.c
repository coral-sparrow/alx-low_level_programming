#include <stdio.h>

/**
 * main - the main function
 * @argc: the argument count
 * @argv: array of cmd args
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);

}
