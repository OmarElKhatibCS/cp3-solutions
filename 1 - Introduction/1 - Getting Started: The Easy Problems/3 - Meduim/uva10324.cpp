#include <cstdio>

int main() {
  char binary[1000001];
  int TC, a, b, start, end;
  bool same;
  while (1) {
    scanf("%s", binary);
    scanf("%d", &TC);
    while (TC--) {
      same = true;
      scanf("%d %d", &a, &b);
      if (a > b) {
        start = b;
        end = a;
      } else if (a < b) {
        start = a;
        end = b;
      } else {
        start = end = a;
      }
      for (int i = start; i < end; i++)
        if (binary[i] != binary[i + 1]) same = false;

      if (same)
        printf("yes\n");
      else
        printf("no\n");
    }
  }
  return 0;
}
