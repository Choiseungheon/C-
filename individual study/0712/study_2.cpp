#include <stdio.h>
int main() {

	int a[5][5] = { 0 };
	int(*p)[5] = a;
	int i, j;
	int add = 1;

	for (j = 0; j < 5; j++) {
		for (i = 0; i < 5; i++) {

			*(*(p + i) + j) = add++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			printf("%4d", *(*(p + i) + j));
		}
		printf("\n");
	}
}
