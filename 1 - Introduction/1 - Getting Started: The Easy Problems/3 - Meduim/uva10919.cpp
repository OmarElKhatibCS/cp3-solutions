#include <cstdio>

int main() {
  int nb_courses, nb_course, nb_cat, nb_courses_in_cat;

  while (1) {
    bool pass = true;
    scanf("%d", &nb_courses);
    if (nb_courses == 0) break;
    scanf("%d", &nb_cat);
    int courses[nb_courses];
    int len_courses = nb_courses;
    for (int i = 0; i < len_courses; i++) {
      scanf("%d", &nb_course);
      courses[i] = nb_course;
    }
    while (nb_cat--) {
      int compatible = 0;
      scanf("%d %d", &nb_courses, &nb_courses_in_cat);
      while (nb_courses--) {
        scanf("%d", &nb_course);
        for (int i = 0; i < len_courses; i++)
          if (nb_course == courses[i]) compatible++;
      }
      if (compatible != nb_courses_in_cat) {
        pass = false;
      }
    }
    if (pass)
      printf("\nyes\n");
    else
      printf("\nno\n");
  }

  return 0;
}
