/*
	키보드로부터 10명의 성적을 입력 받아서
	학점을 출력
	성적을 버블정렬을 이용하여 오름 차순정렬
	성적을 선택정렬을이용하여 내림차순정렬
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 10

int main() {

	int score[max] = { 0 };
	int t = 0, st = 0, a = 0, n = 0, m = 0;

	while (st < 10) {
		printf(" Please enter student grades :");
		scanf("%d", &score[st]);


		if (score[st] >= 90)
			printf("A score \n");

		else if (score[st] >= 80)
			printf("B score.\n");

		else if (score[st] >= 70)
			printf("C score.\n");

		else if (score[st] >= 60)
			printf("F score \n");

		else if (score[st] <= 59)
			printf("disqualification\n");

		st++;
	}

	//bubble sort ascending order

	for (m = 0; m < st; m++) {
		for (n = 0; n < st - 1; n++) {

			if (score[n] > score[n + 1]) {
				t = score[n];
				score[n] = score[n + 1];
				score[n + 1] = t;
			}
		}
	}

	n = 0;
	while (n < 10) {
		printf("%d \n", score[n]);
		n++;
	}

	printf("=========================\n");

	// selection sort descending order

	n = 0;
	m = 0;
	while (n < max - 1) {
		m = n + 1;
		while (m < 10) {
			if (score[n] < score[m]) {
				t = score[n];
				score[n] = score[m];
				score[m] = t;
			}
			m++;
		}
		n++;
	}


	n = 0;
	while (n < 10) {
		printf("%d \n", score[n]);
		n++;

	}
}





