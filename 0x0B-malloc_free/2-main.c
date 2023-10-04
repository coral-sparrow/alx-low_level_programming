#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *s2, *s3, *s4;
    s2 = str_concat("Hello", NULL); 
    s3 = str_concat(NULL, "Hello");
    s4 = str_concat(NULL, NULL);

    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
