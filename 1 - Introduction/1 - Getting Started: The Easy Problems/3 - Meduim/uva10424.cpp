// i know how to solve it but lazy to code it so ... :)
//
#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
char low(char ch) {
  if (ch >= 'A' && ch <= 'Z') return ch += 32;
  return ch;
}
int main() {
  string s1, s2;
  int ar[26];
  for (int i = 1; i <= 26; i++) ar[i - 1] = i;
  while (getline(cin, s1)) {
    getline(cin, s2);
    int sum1 = 0, sum2 = 0, len = s1.length();
    for (int i = 0; i < len; i++) {
      if ((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))
        sum1 += ar[low(s1[i]) - 'a'];
    }
    len = s2.length();
    for (int i = 0; i < len; i++) {
      if ((s2[i] >= 'A' && s2[i] <= 'Z') || (s2[i] >= 'a' && s2[i] <= 'z'))
        sum2 += ar[low(s2[i]) - 'a'];
    }

    int tmps = 0, tmpdig1 = 0, tmpdig2 = 0;
    while (sum1 != 0) {
      tmpdig1 += sum1 % 10;
      sum1 /= 10;
    }
    if (tmpdig1 > 9) {
      tmps = tmpdig1;
      tmpdig1 = 0;
      while (tmps != 0) {
        tmpdig1 += tmps % 10;
        tmps /= 10;
      }
    }
    while (sum2 != 0) {
      tmpdig2 += sum2 % 10;
      sum2 /= 10;
    }
    if (tmpdig2 > 9) {
      tmps = tmpdig2;
      tmpdig2 = 0;
      while (tmps != 0) {
        tmpdig2 += tmps % 10;
        tmps /= 10;
      }
    }

    if (tmpdig1 > tmpdig2)
      printf("%0.2f %\n", ((float)tmpdig2 * 100) / (float)tmpdig1);
    else
      printf("%0.2f %\n", ((float)tmpdig1 * 100) / (float)tmpdig2);
  }
  return 0;
}
