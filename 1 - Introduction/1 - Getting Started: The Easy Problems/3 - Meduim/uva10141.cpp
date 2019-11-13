#include <string.h>
#include <cstdio>

int main() {
  int req, nb_prop, met_req, max_met_req;
  char req_name[81], name_prop[81], best_prop[81];
  float price, min_price;

  while (1) {
    max_met_req = -1;
    min_price = 99999999999;
    scanf("%d %d", &req, &nb_prop);
    if (req == 0 && nb_prop == 0) break;
    while (req--) {
      scanf(" %[^\n]", req_name);
    }
    while (nb_prop--) {
      scanf(" %[^\n]", name_prop);
      scanf("%f %d", &price, &met_req);
      int temp = met_req;
      while (temp--) {
        scanf(" %[^\n]", req_name);
      }
      if (met_req > max_met_req) {
        max_met_req = met_req;
        min_price = price;
        strcpy(best_prop, name_prop);
      } else if (met_req == max_met_req && price < min_price) {
        min_price = price;
        strcpy(best_prop, name_prop);
      }
    }
    printf("\n REP is : %s \n", best_prop);
  }

  return 0;
}
