#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string max_str(int occ[]) {
  int max_index = 0;
  for (int i = 1; i < 4; i++) {
    if (occ[i] > occ[max_index]) max_index = i;
  }
  if (max_index == 0)
    return "S";
  else if (max_index == 1)
    return "D";
  else if (max_index == 2)
    return "H";
  else if (max_index == 3)
    return "C";
  return "";
}

int cardToPoint(string card) {
  switch (card[0]) {
    case 'A':
      return 4;
    case 'K':
      return 3;
    case 'Q':
      return 2;
    case 'J':
      return 1;
  }
}

int typeToInt(string card) {
  switch (card[1]) {
    case 'S':
      return 0;
    case 'D':
      return 1;
    case 'H':
      return 2;
    case 'C':
      return 3;
  }
}

int main() {
  int occ[4];  // S , D , H , C
  int points, s_points;
  bool trump[4], ACE[4], KING[4], QUEEN[4], JACK[4];
  string card;

  while (1) {
    s_points = points = 0;
    for (int i = 0; i < 4; i++) {
      trump[i] = ACE[i] = KING[i] = QUEEN[i] = JACK[i] = false;
      occ[i] = 0;
    }
    for (int i = 0; i < 13; i++) {
      cin >> card;
      occ[typeToInt(card)]++;
      if (cardToPoint(card) == 1) {
        JACK[typeToInt(card)] = true;
        points += 1;
      } else if (cardToPoint(card) == 2) {
        QUEEN[typeToInt(card)] = true;
        points += 2;
      } else if (cardToPoint(card) == 3) {
        KING[typeToInt(card)] = true;
        points += 3;
      } else if (cardToPoint(card) == 4) {
        ACE[typeToInt(card)] = true;
        points += 4;
      }
    }

    for (int i = 0; i < 4; i++) {
      if (ACE[i]) trump[i] = true;
      if (KING[i] && occ[i] < 2)
        points--;
      else if (KING[i])
        trump[i] = true;
      if (QUEEN[i] && occ[i] < 3)
        points--;
      else if (QUEEN[i])
        trump[i] = true;
      if (JACK[i] && occ[i] < 4)
        points--;
      else if (JACK[i])
        trump[i] = true;

      if (occ[i] == 2)
        s_points++;
      else if (occ[i] < 2)
        s_points += 2;
    }

    cout << "BID ";
    if (trump[0] && trump[1] && trump[2] && trump[3] && points >= 16)
      cout << "NO-TRUMP";
    else if (points < 14)
      cout << "PASS";
    else if (points + s_points >= 14)
      cout << max_str(occ);
    cout << "\n";
  }
  return 0;
}
