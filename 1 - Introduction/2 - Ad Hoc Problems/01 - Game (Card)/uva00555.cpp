#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<int> v, map<string, int> cards) {
  for (int e : v)
    for (map<string, int>::iterator it = cards.begin(); it != cards.end(); it++)
      if (e == it->second) cout << it->first + " ";
}

int main() {
  map<string, int> cards;

  string str_i;
  for (int i = 2; i <= 14; i++) {
    if (i < 10)
      str_i = to_string(i);
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
    cards["C" + str_i] = i;
    cards["D" + str_i] = i + 13;
    cards["S" + str_i] = i + 26;
    cards["H" + str_i] = i + 39;
  }

  map<char, int> turns;
  turns['N'] = 0;
  turns['E'] = 1;
  turns['S'] = 2;
  turns['W'] = 3;

  vector<int> S, W, N, E;

  int turn = 0;
  char f;
  cin >> f;
  turn = turns[f] + 1;
  char c;
  string card = "";
  int i = 0;
  while (cin >> c) {
    if (c == '#') break;
    card += c;
    if (card.length() == 2) {
      switch (turn) {
        case 0:
          N.push_back(cards[card]);
          break;
        case 1:
          E.push_back(cards[card]);
          break;
        case 2:
          S.push_back(cards[card]);
          break;
        case 3:
          W.push_back(cards[card]);
          break;
      }
      turn++;
      if (turn > 3) turn = 0;
      card = "";
    }
  }
  sort(S.begin(), S.end());
  sort(W.begin(), W.end());
  sort(N.begin(), N.end());
  sort(E.begin(), E.end());
  cout << "S: ";
  print_vector(S, cards);
  cout << endl;
  cout << "W: ";
  print_vector(W, cards);
  cout << endl;
  cout << "N: ";
  print_vector(N, cards);
  cout << endl;
  cout << "E: ";
  print_vector(E, cards);
  cout << endl;

  return 0;
}
