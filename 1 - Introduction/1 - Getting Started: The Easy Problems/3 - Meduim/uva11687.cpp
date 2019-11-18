#include <cstdio>

int digits(int steps, int nb) {
  int len = 0;
  int temp = nb;
  while (temp != 0) {
    len++;
    temp /= 10;
  }
  if (len == nb) return steps;
  digits(++steps, len);
}

int main() {
  int nb;
  while (scanf("%d", &nb) == 1 && nb != 0) printf("%d\n", digits(1, nb));
  return 0;
}
