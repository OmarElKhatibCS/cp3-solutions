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

int main() {
  int shuffles;
  int TC;
  int shuffle[100];
  int deck[100][52];

  string line = "";
  string suit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
  string value[] = {"2", "3",  "4",    "5",     "6",    "7",  "8",
                    "9", "10", "Jack", "Queen", "King", "Ace"};
  SCD(TC);
  while (TC--) {
    cout << line;
    line = "\n";
    SCD(shuffles);
    for (int i = 0; i < shuffles; i++) {
      for (int j = 0; j < 52; ++j) {
        SCD(deck[i][j]);
        --deck[i][j];
      }
    }
    cin.ignore();

    int j = 0;
    string number;
    while (getline(cin, number) && number.length()) {
      istringstream ss(number);
      ss >> shuffle[j];
      --shuffle[j++];
    }

    for (int i = 0; i < 52; i++) {
      int k = i;
      for (j = shuffles - 1; j > -1; --j) k = deck[shuffle[j]][k];
      cout << value[k % 13] << " of" << suit[k / 13] << '\n';
    }
  }

  return 0;
}
