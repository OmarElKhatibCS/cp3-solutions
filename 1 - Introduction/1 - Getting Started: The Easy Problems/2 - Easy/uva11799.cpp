#include <cstdio>

int main() {
  int TC, participants, nb;
  scanf("%d", &TC);

  while (TC--) {
    scanf("%d", &participants);
    scanf("%d", &nb);
    int max = nb;
    participants--;
    while (participants--) {
      scanf("%d", &nb);
      if (max < nb) max = nb;
    }
    printf("%d\n", max);
  }

  return 0;
}
