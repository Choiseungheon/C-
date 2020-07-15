#include <stdio.h>
#define max 7
int main()
{
	int a[max][max] = { 0 };
	int(*s)[max] = { NULL };
	int i = 0, j = 0, m = 1;
	int c = 7, b = 5;

	s = a;
	for (i = 0; i < max; i++) {
		if (c > 3) {
			for (j = 0; j < c; j++) {
				*(*(s + i) + j) = m;
				m++;
			}
			c--;
		}
		else if (b <= max) {
			for (j = 0; j < b; j++) {
				*(*(s + i) + j) = m;
				m++;
			}
			b++;
		}
	}

	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++) {
			if (a[i][j])
				printf("%4d", a[i][j]);
			else
				printf("%4c", ' ');
		}
		printf("\n");
	}
}