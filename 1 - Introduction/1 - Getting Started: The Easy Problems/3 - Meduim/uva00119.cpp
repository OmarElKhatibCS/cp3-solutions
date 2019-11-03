#include <string.h>
#include <cstdio>
int main() {
  char name[13], giver[13], reciver[13];
  int Money, number_of_people, give_to_nb;

  while (scanf("%d", &number_of_people)) {
    char peoples[number_of_people][11];
    int money_for_each[number_of_people];
    for (int i = 0; i < number_of_people; i++) {
      scanf("%s", name);
      strcpy(peoples[i], name);
      money_for_each[i] = 0;
    }

    for (int i = 0; i < number_of_people; i++) {
      scanf("%s", giver);
      scanf("%d %d", &Money, &give_to_nb);
      if (Money == 0 || give_to_nb == 0) continue;
      int each = Money / give_to_nb;
      while (give_to_nb--) {
        scanf("%s", reciver);
        for (int j = 0; j < number_of_people; j++) {
          if (strcmp(giver, peoples[j]) == 0) money_for_each[j] -= each;
          if (strcmp(reciver, peoples[j]) == 0) money_for_each[j] += each;
        }
      }
    }

    for (int i = 0; i < number_of_people; i++) {
      printf("\n%s %d\n", peoples[i], money_for_each[i]);
    }
  }

  return 0;
}
