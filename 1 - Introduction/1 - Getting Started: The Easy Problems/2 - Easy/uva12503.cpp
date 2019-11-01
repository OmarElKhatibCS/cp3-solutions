#include <cstdio>

int main() {
  int TC, nb_cmds, steps, back_to;
  char cmd[10], temp;

  scanf("%d", &TC);

  while (TC--) {
    scanf("%d", &nb_cmds);
    int cmds[nb_cmds];
    steps = 0;
    for (int i = 0; i < nb_cmds; i++) {
      scanf("%c", &temp);  // to clear buffer
      scanf("%[^\n]", cmd);
      if (cmd[0] == 'R') {
        steps++;
        cmds[i] = 1;
      } else if (cmd[0] == 'L') {
        steps--;
        cmds[i] = -1;
      } else {
        back_to = cmd[8] - '0';
        steps += cmds[back_to - 1];
        cmds[i] = cmds[back_to - 1];
      }
    }
    printf("%d\n", steps);
  }

  return 0;
}
