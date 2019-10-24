#include <iostream>
#include <cstdio>

int main() {
	int N , gx,gy;
	printf("give me test cases number : ");
	scanf("%d",&N);
	printf("\n");
	for(int i=0 ; i < N ; i++) {
		printf("Give me grid size x y : ");
		scanf("%d %d" , &gx,&gy);
		printf("%d\n" , (gx/3)*(gy/3) );
	}
	return 0;
}
