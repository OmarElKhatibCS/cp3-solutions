#include <cstdio>
#include <cstring>

int len_str(char s[]) {
  int i=0;
  while(s[i] != '\0') {
    i++;
  }
  return i;
}

int main() {
  char s[7] , one[4] =  "one";

  int TC , validator=0;
  scanf("%d",&TC);
  while(TC--) {
    scanf("%s" , s);
    if(len_str(s) > 3) printf("3");
    else {
      for(int i=0;s[i] != '\0' ; i++) {
        if ( s[i] == one[i]) validator++;
      }
      if ( validator >= 2 ) printf("1");
      else printf("2");
    }
    validator = 0;
    printf("\n");
  }

  return 0;
}
