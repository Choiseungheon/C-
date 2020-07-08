#include <stdio.h>
int main() {

	char ch[26] = { 'A','B','C','D','E','F','G','H','I',
   'J','K','L','M','N','O','P','Q','R',
   'S','T','U','V','W','X','Y','Z' };

	char m = 0, n = 0, temp = 0;


	while (m < 26) {

		n = 0;
		while (n < 26) {

			printf("%c ", ch[n]);
			n++;
		}
		printf("\n");
		n = 0;

		while (n < 25) {

			temp = ch[n];
			ch[n] = ch[n + 1];
			ch[n + 1] = temp;
			n++;
		}
		m++;
	}
}
