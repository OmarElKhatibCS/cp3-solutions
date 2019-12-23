/********   All Required Header Files ********/
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <algorithm>
#include <bitset>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

// programm here
int high_card(int v[]) { return *std::max_element(v, v + 5); }

bool flush(int v[]) {
  if (high_card(v) % 14 == 1) return false;
  return true;
}

bool s(int v[]) {
  for (int i = 0; i < 4; i++) {
    if (v[i + 1] - v[i] != 1) return false;
  }
  return true;
}

bool s_f(int v[]) {
  int count = 0;
  for (int i = 0; i < 4; i++) {
    if (v[i + 1] - v[i] != 1)
      return false;
    else if (v[i] % 14 != 0 && v[i + 1] - v[i] == 1)
      count++;
  }
  if (count == 4) return true;
  return false;
}

bool t_kind(int v[]) {
  int count = 0;
  for (int i = 0; i <= 1; i++) {
    for (int j = i + 1; j < 5; j++)
      if (v[i] == (v[j] % 14)) count++;

    if (count >= 2) return true;
  }
  return false;
}

bool f_kind(int v[]) {
  if (t_kind(v) == false) return false;
  int count = 0;
  for (int i = 0; i <= 1; i++) {
    for (int j = i + 1; j < 5; j++)
      if (v[i] == (v[j] % 14)) count++;

    if (count == 3) return true;
  }
  return false;
}

bool is_pair(int v[]) {
  for (int i = 0; i < 4; i++)
    for (int j = i + 1; j < 5; j++)
      if (v[i] == v[j] % 14) return true;
  return false;
}

bool two_pair(int v[]) {
  if (is_pair(v) == false) return false;
  if (f_kind(v)) return false;
  int old_pair = -1;
  for (int i = 0; i < 4; i++)
    for (int j = i + 1; j < 5; j++)
      if (v[i] == (v[j] % 14)) {
        if (old_pair < 0) {
          old_pair = v[i];
          ++i;
          continue;
        }
        if (old_pair != v[i]) return true;
        if (old_pair == v[i]) ++i;
      }
  return false;
}

bool t_cons(int v[]) {
  int count = 0;
  for (int i = 0; i < 4; i++) {
    if (v[i + 1] - v[i] == 1)
      count++;
    else
      count = 0;
    if (count == 2) return true;
  }
  return false;
}

bool f_house(int v[]) {
  if (is_pair(v) && t_cons(v)) return true;
  return false;
}

int main() {
  string card;

  map<string, int> cards;

  string str_i;
  for (int i = 1; i <= 14; i++) {
    if (i < 10)
      str_i = to_string(i + 1);
    else if (i == 10)
      str_i = "T";
    else if (i == 11)
      str_i = "J";
    else if (i == 12)
      str_i = "Q";
    else if (i == 13)
      str_i = "K";
    else if (i == 14)
      str_i = "A";
    cards[str_i + "C"] = i;
    cards[str_i + "D"] = i + 14;
    cards[str_i + "S"] = i + 28;
    cards[str_i + "H"] = i + 42;
  }
  for (int i = 0; i < 4; i++) {
    int white[5], black[5];
    for (int j = 0; j < 5; j++) {
      cin >> card;
      white[j] = cards[card];
    }
    for (int j = 0; j < 5; j++) {
      cin >> card;
      black[j] = cards[card];
    }

    sort(white, white + 5);
    sort(black, white + 5);

    string win = "";
  }

  return 0;
}
