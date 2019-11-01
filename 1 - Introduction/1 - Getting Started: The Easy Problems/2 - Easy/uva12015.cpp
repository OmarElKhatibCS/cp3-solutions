#include <cstdio>

int main() {
  struct pages {
    char url[101];
    int confident;
  };

  int TC, max_confident;
  scanf("%d", &TC);

  while (TC--) {
    pages _pages[101];
    max_confident = -1;
    for (int i = 0; i < 10; i++) {
      scanf("%s %d", _pages[i].url, &_pages[i].confident);
      if (_pages[i].confident > max_confident)
        max_confident = _pages[i].confident;
    }
    for (int i = 0; i < 10; i++)
      if (_pages[i].confident == max_confident) printf("%s\n", _pages[i].url);
  }

  return 0;
}
