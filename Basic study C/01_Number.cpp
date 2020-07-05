/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/




#include <stdio.h>
int main() {

	int a = 1, b = 1, c = 1;


	while (a <= 5) {

		while (b <= 5) {

			printf("%d", b);
			b++;

		}                
		printf("\n");
		c++;
		b = c;
		
		a++;
	}		
}