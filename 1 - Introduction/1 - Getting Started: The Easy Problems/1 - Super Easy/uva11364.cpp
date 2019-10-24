#include <cstdio>

int main() {
	int cases,N,n,min,max,toggle=0;
	scanf("%d",&cases);
	while(cases--) {
		scanf("%d", &N);
		while(N--) {
			scanf("%d",&n);
			if(!toggle) {
				min = n;
				max = n;
			}
			toggle = 1;
			if(n < min) min = n;
			else if(n > max) max = n;
		}
		printf("%d\n" , 2*(max-min));
		toggle = 0;
	}

}
