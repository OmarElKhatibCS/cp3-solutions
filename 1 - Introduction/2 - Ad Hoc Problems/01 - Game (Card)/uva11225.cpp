#include <iostream>

using namespace std;

int main() {

	int needed[] = {56,51,41,36};
	int nOulders , TC , nCards;

	float points;
	string card;
	cin >> TC;
	while(TC--) {
		nOulders = points = 0;
		cin>> nCards;
		cin.ignore();

		for(int i =0 ; i<nCards;i++) {
			getline(cin , card);
			if(card == "twenty-one of trumps" || card == "fool" || card == "one of trumps"){
				nOulders++;
				points+=4.5;
			}
			else if(card.find("king")!= string::npos) points+=4.5;
			else if(card.find("queen") != string::npos) points+=2.5;
			else if(card.find("jack") != string::npos) points+= 1.5;
			else points += 0.5;
		}
		cout << "\n\nHand #"<<TC<<endl;
		if(points < needed[nOulders]) cout << "Game lost by " << needed[nOulders]-points<<" point(s).\n";
		else
			cout<<"Game won by " << points - needed[nOulders] << " point(s).\n";

	}

	return 0;
}
