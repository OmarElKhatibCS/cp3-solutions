#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char c;
	bool toggle = 0;
	while(scanf("%c",&c) == 1) {
		if(c == '"') {
			if(!toggle) {
				printf("``");
			}
			else {
				printf("'");
			}
			toggle = !toggle;
		} else
			printf("%c",c);
	}
}
