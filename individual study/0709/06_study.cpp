#pragma warning(disable : 4996)
#include <stdio.h>
int main() {

	int a[10] = { 0 };
	int i;
	int max;
	int min;
	
	for (i = 0; i < 10; i++) {
		printf(" please enter %dth value :", i);
		scanf("%d", &a[i]);	
		if (i == 0) {
			max = a[0];
			min = a[0];
		}
		if (max < a[i])
			max = a[i];

		if (min > a[i])
			min = a[i];
	}
	printf(" MAX ==> %d, MIN ==> %d", max, min);

}