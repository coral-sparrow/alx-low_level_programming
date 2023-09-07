#include <string.h>
#include <unistd.h>

int main(void) {
  char s[] = "hello world";
  write(STDERR_FILENO, s, strlen(s));
  return 0;

}
