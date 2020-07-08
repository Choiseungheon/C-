#include <stdio.h>
int main() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int m;
	int n;

	m = 0;
	do {

		n = a[m];
		a[m] = a[9-m];
		a[9-m] = n;
		m++;
	} while (m < 5);
	m = 0;
	do {
		printf(" %d", a[m]);
		m++;
	} while (m < 10);
	
}