#include <stdio.h>
int main() {

	int n = 0, m = 1;
	int tori;

	printf("���丮�� ���� �Է��ϼ��� :");
	scanf("%d", &tori);
	
	while (tori > n) {

		n++;	
		m = m * n;
	}
	printf("%d! = %d \n", tori, m);
}