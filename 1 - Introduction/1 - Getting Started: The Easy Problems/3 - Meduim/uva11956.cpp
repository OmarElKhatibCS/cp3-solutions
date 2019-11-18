#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
  int cases;
  scanf("%d\n", &cases);
  char line[100001];
  for (int cas = 1; cas <= cases; cas++) {
    scanf("%s\n", line);
    int len = strlen(line);
    int pointer = 0;
    unsigned char memoryCell[100] = {0};
    for (int i = 0; i < len; i++) {
      switch (line[i]) {
        case '>':
          pointer = pointer == 99 ? 0 : pointer + 1;
          break;
        case '<':
          pointer = pointer == 0 ? 99 : pointer - 1;
          break;
        case '+':
          memoryCell[pointer]++;
          break;
        case '-':
          memoryCell[pointer]--;
          break;
      }
    }

    printf("Case %d:", cas);
    for (int i = 0; i < 100; i++) printf(" %02X", memoryCell[i]);
    printf("\n");
  }
}
