/*

*
**
***
****
*****

*/




#include <stdio.h>
int main() {

	int a = 5, b = 0, c = 5;

	while (a >= 1) {
		b = 5;
		while (b <= c) {

			printf("*");
			b++;
			
		}
		printf("\n");
		c++;


		a--;
	}
}