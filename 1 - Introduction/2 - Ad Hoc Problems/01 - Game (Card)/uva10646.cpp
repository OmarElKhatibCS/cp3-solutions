#include <iostream>
#include <string>

using namespace std;

int val(char card) {
	return card > '9' ? 10 : card - '0';
}

int main() {
	int x,y , TC;
	cin >> TC;
	char cards[52][3];

	while(TC--) {
		y = 0;
		for(int i=0 ; i < 52 ; i++) {
			cin >> cards[i];
		}
		int tt = 0; // toTake
		for(int start = 26 , i = 0;start >= 0 && i < 3 ; start--) {
			x=val(cards[start][0]);
			y+=x;
			tt+= 10-x+1;
			start -= 10 - x;
			i++;
		}
		cout << "case " << TC+1 << ": " << cards[y+tt-1] << endl;
	}

	return 0;
}

