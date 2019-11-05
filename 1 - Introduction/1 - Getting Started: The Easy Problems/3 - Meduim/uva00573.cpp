#include <cstdio>

int main() {
  int h, u, d, f, day;

  double well_height, slide_height, strength, current_height, fatigue;

  while (scanf("%d %d %d %d", &h, &u, &d, &f) && h != 0) {
    well_height = h;
    slide_height = d;
    strength = u;
    current_height = 0;
    fatigue = f / 100.0 * strength;
    day = 0;

    while (1) {
      day++;
      current_height += strength;
      if (current_height > well_height) {
        printf("success on day %d\n", day);
        break;
      }
      current_height -= slide_height;
      if (current_height < 0) {
        printf("failure on day %d\n", day);
        break;
      }
      strength -= fatigue;
      if (strength < 0) strength = 0;
    }
  }
  return 0;
}
