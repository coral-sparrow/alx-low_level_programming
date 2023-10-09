#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: str 1
 * @s2: str 2
 * @n : int
 *
 * Return: pinter.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int s1_len = 0, s2_len = 0, new_n = 0, i = 0, j = 0, total_len;

	new_n = n;
	if (s1)
		s1_len = strlen(s1);
	if (s2)
		s2_len = strlen(s2);
	if (new_n >= s2_len)
		new_n = s2_len;

	total_len = s1_len + new_n + 1;
	s = malloc(total_len);

	if (!s)
		return (NULL);
	if (s1)
	{
		for (i = 0; i < s1_len; i++)
			s[i] = s1[i];
	}
	if (s2)
	{
		for (j = 0; j < new_n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}

	s[i] = '\0';

	return (s);
}
