#include <stdio.h>

const char *odd_or_even(const int *v, size_t sz) {
  int buff = 0;
  for (size_t i = 0; i < sz; i++)
    buff += v[i];
  return (buff % 2 == 0) ? "Even" : "Odd";
}

int main() {
  int arr[] = {1};
  int sz = 1;

  const char *result = odd_or_even(arr, sz);
  printf("result : %s\n", result);
  return 0;
}
