#include <stdio.h>

int main() {
	int a[5][5] = { 0 };
	int(*p)[5] = { NULL };
	int i = 0, j = 0;
	int s = 0;
	p = a;
	for (i = 0; i < 5; i++) {
		s = i % 2;
		for (j = 0; j < 5; j++) {
			*(*(p + i) + j) = (i + s) * 5 + (j + 1) * (1 - s) - j * s;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", *(*(p + i) + j));
		}
		printf("\n");
	}
}