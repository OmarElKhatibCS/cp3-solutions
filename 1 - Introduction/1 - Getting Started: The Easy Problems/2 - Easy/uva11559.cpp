#include <cstdio>

int main() {
  int participants, budget, hotels, weeks, price, beds, week, temp_weeks,
      min_budget;
  bool can_stay, first_calc = true, can_handle_budget = true;

  while (1) {
    scanf("%d %d %d %d", &participants, &budget, &hotels, &weeks);
    temp_weeks = weeks;

    while (hotels--) {
      scanf("%d", &price);
      can_stay = true;
      week = 0;
      weeks = temp_weeks;
      while (weeks--) {
        scanf("%d", &beds);
        if (beds < participants) {
          can_stay = false;
          printf("no space , move on \n");
          break;
        } else {
          if (week == temp_weeks - 1) {
            can_stay = true;
            if (first_calc) {
              min_budget = participants * price;
              first_calc = false;
            } else {
              if (min_budget > participants * price)
                min_budget = participants * price;
            }
          }
          week++;
        }
      }
    }
    if (can_stay)
      if (min_budget > budget) can_handle_budget = false;
    if (can_stay && can_handle_budget)
      printf("%d\n", min_budget);
    else
      printf("stay home\n");
  }

  return 0;
}
