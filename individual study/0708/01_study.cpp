#include <stdio.h>
int main() {
	
	int a[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int b[10]{ 0 };
	int m = 0;

	do {
		b[m] = (a[10-1]) - m;
		printf(" %d", b[m]);
		m++;		
	} while (m < 10);
}