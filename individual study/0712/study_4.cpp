#include <stdio.h>
int main() {

	int a[5][5] = { 0 };    
	int(*p)[5] = a;
	int i, j;
	int add = 1;
	
	for (i = 0; i < 5; i++) {
		for (j = 4 - i; j < 5 ; j++) {

			a[i][j] = add++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (a[i][j] == 0) {
				printf("   ");
			}
			else
				printf("%3d", *(*(p + i) + j));

		}
		printf("\n");
	}
}