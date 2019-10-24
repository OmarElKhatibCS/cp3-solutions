#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  int TC;
  char s[8];
  scanf("%d" , &TC);
  while(TC--) {
    scanf("%s",&s);
    if(strcmp(s,"#") == 0 ) break;
    if(strcmp(s , "HELLO") ==0 ) printf("ENGLISH\n");
    else if(strcmp(s,"HOLA")==0) printf("SPANISH\n");
    else if(strcmp(s,"HALLO")==0) printf("GERMAN\n");
    else if(strcmp(s,"BONJOUR")==0) printf("FRENCH\n");
    else if(strcmp(s,"CIAO")==0) printf("ITALIAN\n");
    else if(strcmp(s,"ZDRAVSTVUJTE")==0) printf("RUSSIAN\n");
    else printf("UNKNOWN\n");
  }
  return 0;
}
