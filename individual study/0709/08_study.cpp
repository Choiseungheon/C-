#pragma warning(disable : 4996)
#include <stdio.h>
int main() {

	int a[7] = { 0 };
	int i, j, tot = 0;
	int max;
	int	min;
	
	for(i = 0; i < 7; i++){

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
	 j = 0;
	 while (j < 7) {

		 if (a[j] != max && a[j] != min)
			 tot = tot + a[j];
	     j++;
	 }
	printf("%d", tot);	
}