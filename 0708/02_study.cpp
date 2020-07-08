#include <stdio.h>
int main(){

	int a[10] = {1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0 };
	int m;

	m = 0;
	while (m < 5) {

		b[m] = (a[m] + 5);
		printf(" %d", b[m]);
		m++;
		
	}while (m < 10) {

		b[m] = (a[m] - 5);
		printf("%d", b[m]);
		m++;

	}


	
}