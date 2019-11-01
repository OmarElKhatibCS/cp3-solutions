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
      bundle_mile += (seconds / 30) * 10 + 10;
      bundle_juice += (seconds / 60) * 15 + 15;
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
