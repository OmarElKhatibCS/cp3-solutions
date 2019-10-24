#include <cstdio>

int main() {
  int TC ,a,b,c;
  scanf("%d" , &TC);
  while(TC--) {
    scanf("%d %d %d" , &a,&b,&c);
    if(a == 20 && b == 20 && c == 20) printf("case : good \n");
    else printf("case : bad \n");
  }
  return 0;
}
