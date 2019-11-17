#include <cstdio>
#include <iostream>

int abs(int a, int b) {
  if (a - b < 0) return -1 * (a - b);
  return a - b;
}

int main() {
  int L, start, end, min_len;
  char s[2000001];

  while (scanf("%d", &L) && L) {
    start = -1;
    end = -1;
    scanf("%s", s);
    min_len = 2000001;
    for (int i = 0; i < L; i++) {
      if (s[i] == 'Z') {
        min_len = 0;
        break;
      }
      if (s[i] == 'D')
        start = i;
      else if (s[i] == 'R')
        end = i;
      if (start != -1 && end != -1) {
        if (abs(start - end) < min_len) min_len = abs(start - end);
      }
    }
    printf("%d\n", min_len);
  }
  return 0;
}
