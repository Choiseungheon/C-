#pragma warning(disable : 4996)
#include <stdio.h>

int main() {

	int s[20] = { 0 };
	int i, j = 0;
	int max;
	int	min;
	int high = 0, low = 0;
	j = 0;
	for (i = 0; i < 20; i++) {
		printf("Please enter the grade of the %d th student. :", i + 1);
		scanf("%d", &s[i]);
		if (i == 0) {
			max = s[0];
			min = s[0];
		}
		if (max < s[i])
			max = s[i];

		if (min > s[i])
			min = s[i];
	}
	while (j < 20) {
		if (s[j] == max) {
			high++;
		}
		if (s[j] == min) {
			low++;
		}
		j++;
	}
	printf("The highest and lowest grade students are %d and %d respectively.", high, low);
}