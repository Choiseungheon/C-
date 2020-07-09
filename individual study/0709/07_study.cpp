#pragma warning(disable : 4996)
#include <stdio.h>
int main() {

	int a[10] = {0};
	int i;
	int n, num, tot;

	num = 0;
	tot = 0;
	for (i = 0; i < 10; i++) {

		printf(" please enter %dth value :", i);
		scanf("%d", &a[i]);

		if (a[i] >= 90) {
			num= num + 1;		
			tot = tot + a[i];
		}
	}
	printf("total count : %d Total : %d", num, tot);
}