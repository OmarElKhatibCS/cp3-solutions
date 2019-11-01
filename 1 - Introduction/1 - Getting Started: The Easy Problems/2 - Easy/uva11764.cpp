#include <cstdio>

int main() {
  int TC, walls_nb, wall_height, ups, downs;

  scanf("%d", &TC);

  while (TC--) {
    ups = 0;
    downs = 0;
    scanf("%d", &walls_nb);
    scanf("%d", &wall_height);
    walls_nb--;
    int current_wall_height = wall_height;
    while (walls_nb--) {
      scanf("%d", &wall_height);
      if (wall_height > current_wall_height)
        ups += 1;
      else if (wall_height < current_wall_height)
        downs += 1;
      current_wall_height = wall_height;
    }
    printf("%d %d\n", ups, downs);
  }

  return 0;
}
