#include <cstdio>

int min(int a , int b , int c) {
  if(a<b) if(a<c) return a;
  else return c;
  else if(b<c) return b;
  else return c;
}

int main() {
  int TC , a , b , c;
  scanf("%d" , &TC);
  while(TC--) {
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",min(a,b,c));
  }
  return 0;
}
