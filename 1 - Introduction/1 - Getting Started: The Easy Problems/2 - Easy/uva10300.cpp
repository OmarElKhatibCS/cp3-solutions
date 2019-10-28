#include <cstdio>

int main() {
  int TC, FTC, a, b, c, sum;
  scanf("%d", &TC);

  while (TC--) {
    sum = 0;
    scanf("%d", &FTC);

    while (FTC--) {
      scanf("%d %d %d", &a, &b, &c);
      sum += (a * c);
    }
    printf("%d\n", sum);
  }

  return 0;
}
