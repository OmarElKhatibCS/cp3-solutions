#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int N , n1,n2;
	char op;
	scanf("%d" , &N);
	for(int i=0 ; i < N ; i++) {
		scanf("%d %d",&n1,&n2);
		n1 == n2 ? op='=': (n1 < n2) ? op = '<' : op = '>';
		printf("%c\n",op);
	}
}
