#include <cstdio>

// I do not Understand the problem . Credits go to dhruvpancholi
int main() {
  int n, m, c;
  int testCase = 1;
  while (scanf("%d %d %d", &n, &m, &c), n || m || c) {
    bool state[n + 1];
    int consumption[n + 1];

    for (int i = 1; i <= n; i++) state[i] = false;
    for (int i = 1; i <= n; i++) scanf("%d", &consumption[i]);

    int max = 0, runningPower = 0;

    for (int i = 1; i <= m; i++) {
      int temp;
      scanf("%d", &temp);

      if (state[temp] == false) {
        state[temp] = true;
        runningPower += consumption[temp];
        if (runningPower > max) max = runningPower;
      } else if (state[temp] == true) {
        state[temp] = false;
        runningPower -= consumption[temp];
      }
    }

    printf("Sequence %d\n", testCase++);
    if (max > c) {
      printf("Fuse was blown.\n\n");
    } else {
      printf("Fuse was not blown.\n");
      printf("Maximal power consumption was %d amperes.\n\n", max);
    }
  }
  return 0;
}
