#include <cstdio>
#include <iostream>
#include <stdlib.h>

int main() {
	int n1,n2,n3,n4,res=0;
	while(1) {
		scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
		if(n1==0&&n2==0&&n3==0&&n4==0) break;
		res = (n1-n2+40);
		res += (n3-n2+40);
		res += (n3-n4+40);
		res *= 9;
		res += 1080;
		printf("%d\n", res);
	}
	return 0;
}
