#include <stdlib.h>

int main (void) {
  int *ptr = malloc(sizeof(*ptr));
  free(ptr);
  *ptr = 2;
  return 0;
}
