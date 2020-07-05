#include <stdio.h>
int main() {

	int n = 0, m = 1;
	int tori;

	printf("팩토리얼 값을 입력하세요 :");
	scanf("%d", &tori);
	
	while (tori > n) {

		n++;	
		m = m * n;
	}
	printf("%d! = %d \n", tori, m);
}