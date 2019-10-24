#include <cstdio>

int main() {
  int TC , a , counter=0;

  while(1) {
    scanf("%d" , &TC);
    if(TC == 0) break;
    while(TC--) {
      scanf("%d" , &a);
      if(a == 0)counter--;
      else counter++;
    }
    printf("%d\n" , counter);
  }
  return 0;
}
