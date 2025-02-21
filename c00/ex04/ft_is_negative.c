#include <unistd.h>

void ft_is_negative(int n) {
  char negative = 'N';
  char positive = 'P';

  if (n < 0) {
    write(1, &negative, 1);
  } else {
    write(1, &positive, 1);
  }
}

int main(void) {
  char br = '\n';

  ft_is_negative(-3);
  write(1, &br, 1);
  ft_is_negative(5);
  write(1, &br, 1);
  ft_is_negative(-2343);
  write(1, &br, 1);
  ft_is_negative(-7);
  write(1, &br, 1);
  ft_is_negative(42);
  write(1, &br, 1);

  return 0;
}