#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

template<typename K, typename V>
void print_map(map<K,V> const &m)
{
    for (auto const& pair: m) {
        cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

int main() {
	map<string , int> cards;
	// Diamonds
	for(int i=2;i<=9;i++)
		cards.insert(pair <string , int>  ("D"+to_string(2) , i-2));
	cards.insert(pair <string , int>  ("DT"  , 8));
	cards.insert(pair <string , int>  ("DJ" , 9));
	cards.insert(pair <string , int>  ("DQ" , 10));
	cards.insert(pair <string , int>  ("DK" , 11));
	cards.insert(pair <string , int>  ("DA" , 12));
	// Club
	for(int i=2;i<=9;i++)
		cards.insert(pair <string , int>  ("C"+to_string(2) , 13+i-2));
	cards.insert(pair <string , int>  ("CT"  , 13+8));
	cards.insert(pair <string , int>  ("CJ" , 13+9));
	cards.insert(pair <string , int>  ("CQ" , 13+10));
	cards.insert(pair <string , int>  ("CK" , 13+11));
	cards.insert(pair <string , int>  ("CA" , 13+12));
	// Heart
	for(int i=2;i<=9;i++)
		cards.insert(pair <string , int>  ("H"+to_string(2) , 26+i-2));
	cards.insert(pair <string , int>  ("HT"  , 26+8));
	cards.insert(pair <string , int>  ("HJ" , 26+9));
	cards.insert(pair <string , int>  ("HQ" , 26+10));
	cards.insert(pair <string , int>  ("HK" , 26+11));
	cards.insert(pair <string , int>  ("HA" , 26+12));
	// Spades
	for(int i=2;i<=9;i++)
		cards.insert(pair <string , int>  ("S"+to_string(2) , 39+i-2));
	cards.insert(pair <string , int>  ("ST"  , 39+8));
	cards.insert(pair <string , int>  ("SJ" , 39+9));
	cards.insert(pair <string , int>  ("SQ" , 39+10));
	cards.insert(pair <string , int>  ("SK" , 39+11));
	cards.insert(pair <string , int>  ("SA" , 39+12));
	
	print_map(cards);

	vector<string> dealer_deck;
	vector<string> non_dealer_deck;
	vector<string> ground;
	string card;
	int winner;
	bool dealer_turn = false;
	//getline (cin, card);
	while(1) {
		cin >> card;
		if(card == "#") break;
		if(dealer_turn == true) {
			dealer_deck.push_back(card);
		} else {
			non_dealer_deck.push_back(card);
		}
		dealer_turn = !dealer_turn;
	}

	while(1) {
		if(dealer_deck.size() == 0) {winner = 1; break;}
		if(non_dealer_deck.size() == 0) {winner = 2 ; break; }
		dealer_turn = false;
		if(dealer_turn) {
			ground.push_back( dealer_deck.back());
			dealer_deck.pop_back();
		}	
		else {
			ground.push_back( non_dealer_deck.back());
			non_dealer_deck.pop_back();
		}
	}
	
}
