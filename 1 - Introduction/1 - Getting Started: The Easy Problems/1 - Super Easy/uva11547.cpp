#include <cstdio>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d" , &n);
	n *= 567;
	n /= 9;
	n += 7492;
	n *= 235;
	n/=47;
	n-=498;
	n = abs(n);
	printf("%d\n",n%100 / 10);
}
