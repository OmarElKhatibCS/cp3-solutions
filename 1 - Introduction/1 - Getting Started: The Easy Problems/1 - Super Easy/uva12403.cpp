#include <cstdio>
#include <cstring>
using namespace std;

int main() {

  int op_n , donation , donations=0;
  char op_c[10];

  scanf("%d" , &op_n);
  while(op_n--) {
    scanf("%s" , op_c);

    if(strcmp(op_c, "donate") == 0) {
      scanf("%d" , &donation);
      donations += donation;
    }
    else printf("%d\n" , donations);
  }

  return 0;
}
