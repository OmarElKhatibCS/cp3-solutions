#include <cstdio>

int main() {
  int months_loan, nb_depreciation;
  double down_payment, amount_loan, depreciation_values[100];
  // 100 is max nb of months based on text of problem
  //

  while (1) {
    scanf("%d %lf %lf %d", &months_loan, &down_payment, &amount_loan,
          &nb_depreciation);

    if (amount_loan < 0) break;

    while (nb_depreciation--) {
      int month;
      float value_depreciation;

      scanf("%d %f", &month, &value_depreciation);
      for (int i = month; i < 100; i++) {
        depreciation_values[i] = value_depreciation;
      }
    }

    int month_now = 0;
    double monthly_payment = amount_loan / months_loan;
    double current_value =
        (amount_loan + down_payment) * (1 - depreciation_values[0]);
    double current_loan = amount_loan;

    while (current_value < current_loan) {
      month_now++;
      current_loan -= monthly_payment;
      current_value = current_value * (1 - depreciation_values[month_now]);
    }

    printf("%d month", month_now);
    if (month_now != 1) printf("s");
    printf("\n");
  }

  return 0;
}
