#include <stdio.h>


int main (void)
{
	char *s = "mahmoud";
	int i = 0;

	while (*s++)
		i++;

	printf("lenght is %d\n", i);
}
