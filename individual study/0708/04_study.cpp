#include <stdio.h>
int main() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int c[10] = { 0 };
	int m;

	for (m = 0; m < 10; m++) {
		c[m] = a[m] + b[m];
		printf(" %d", c[m]);
	}
}