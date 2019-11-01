#include <stdlib.h>
#include <algorithm>
#include <cstdio>

int main() {
  int from, to;
  while (scanf("%d %d", &from, &to)) {
    if (from < 0 || to < 0) break;

    printf("%d\n", std::min(abs(to - from), 100 - (to - from)));
  }
  return 0;
}
