#include <cstdio>

int main() {
  int TC, nb, x, y;
  scanf("%d", &TC);
  while (TC--) {
    scanf("%d", &nb);

    scanf("%d %d", &x, &y);
    int d = x - y;
    nb--;

    while (nb--) {
      scanf("%d %d", &x, &y);
      if (d != x - y) {
        printf("no\n");
        return 0;
      }
    }
    printf("yes\n");
  }
  return 0;
}
