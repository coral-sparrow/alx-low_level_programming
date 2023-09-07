#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(STDERR_FILENO, buf, strlen(buf));
return (1);

}
