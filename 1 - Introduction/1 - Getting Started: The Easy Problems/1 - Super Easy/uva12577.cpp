#include <cstdio>
#include <cstring>

int main() {
  char s[8];
  while(1) {
    scanf("%s",s);
    if(strcmp(s , "Hajj") == 0) printf("Hajj-e-Akbar");
    else if(strcmp(s , "Umrah") == 0) printf("Hajj-e-Asghar");
  }
}
