#include <cstdio>
#include <iostream>
#include <string>

int main() {
  std::string s;
  int TC, count_F, count_M;

  scanf("%d", &TC);

  while (getchar() != '\n')
    ;
  while (TC--) {
    count_F = 0;
    count_M = 0;
    std::getline(std::cin, s);
    for (char& c : s) {
      if (c == 'M')
        count_M++;
      else if (c == 'F')
        count_F++;
    }

    if (count_F == count_M)
      printf("LOOP\n");
    else
      printf("NO LOOP\n");
  }
  return 0;
}
