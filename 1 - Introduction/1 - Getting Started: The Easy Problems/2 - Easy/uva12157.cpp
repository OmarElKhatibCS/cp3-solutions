#include <cstdio>

int main() {
  int TC, calls, seconds, bundle_mile, bundle_juice;
  scanf("%d", &TC);

  while (TC--) {
    bundle_mile = 0;
    bundle_juice = 0;
    scanf("%d", &calls);
    while (calls--) {
      scanf("%d", &seconds);
      int temp = seconds;

      while (true) {
        if (seconds < 30) {
          bundle_mile += 10;
          seconds -= 29;
        } else {
          bundle_mile += 20;
          seconds -= 59;
        }
        if (seconds <= 0) break;
      }
      seconds = temp;

      while (true) {
        if (seconds < 60) {
          bundle_juice += 15;
          seconds -= 59;
        } else {
          bundle_juice += 30;
          seconds -= 119;
        }
        if (seconds <= 0) break;
      }
    }

    if (bundle_mile < bundle_juice)
      printf("Mile %d\n", bundle_mile);
    else if (bundle_mile > bundle_juice)
      printf("Juice %d\n", bundle_juice);
    else
      printf("Mile Juice %d\n", bundle_mile);
  }

  return 0;
}
