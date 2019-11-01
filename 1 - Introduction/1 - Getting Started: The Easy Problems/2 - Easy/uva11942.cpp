#include <cstdio>

int main() {
  int TC, nb, current_nb;
  bool up, down;
  scanf("%d", &TC);

  printf("Lumberjacks:\n");
  while (TC--) {
    up = false;
    down = false;
    scanf("%d", &nb);
    current_nb = nb;
    for (int i = 0; i < 9; i++) {
      scanf("%d", &nb);
      if (current_nb < nb)
        down = true;
      else if (current_nb > nb)
        up = true;
      current_nb = nb;
    }
    if (up && down)
      printf("Unordered\n");
    else
      printf("Ordered\n");
  }

  return 0;
}
