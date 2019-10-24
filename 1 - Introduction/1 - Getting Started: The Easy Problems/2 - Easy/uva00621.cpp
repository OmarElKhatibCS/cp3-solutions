#include <cstdio>

int len_nb(int a) {
	int length = 0;
	while(a > 0) {
		length++;
		a /= 10;
	}
	return length;
}

int main() {
	int TC , a , divide_by=1;
	scanf("%d" , &TC);
	while(TC--) {
		scanf("%d" , &a);
		if(a == 1 || a == 4 || a == 78) printf("+");
		else if (a % 100 == 35) printf("-");
		else if (a % 10 == 4) {
			divide_by = 1;
			for(int i = 0 ; i < len_nb(a) - 1 ; i++) divide_by *= 10;
			if(a / divide_by == 9) printf("*");
		}
		else {
			divide_by = 1;
			for(int i = 0 ; i < len_nb(a) - 3 ; i++) divide_by *= 10;
			if(a / divide_by == 190) printf("?");
		}
		printf("\n");
	}
	
	return 0;
}
