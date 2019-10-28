#include <cstdio>

int main() {
  int nb, sum;

  while (1) {
    sum = 0;
    scanf("%d", &nb);
    if (nb == 0) break;

    while (1) {
      sum += nb % 10;
      nb /= 10;
      if (nb == 0) {
        if (sum / 10 == 0)
          break;
        else {
          nb = sum;
          sum = 0;
        }
      }
    }

    printf("%d\n", sum);
  }
  return 0;
}
