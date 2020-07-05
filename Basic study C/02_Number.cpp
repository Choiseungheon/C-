/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5


*/




#include <stdio.h>
int main() {

	int a = 1, b = 1, c = 1;


	while (a <= 5) {

		b = 5;
		while (b >= c) {

			printf("%d", b);
			b--;
		}
		printf("\n");
		c++;
		
		
		a++;
	}

}