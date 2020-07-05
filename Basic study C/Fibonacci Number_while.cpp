#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n = 0;
int r = 1;
int ans = 0;
int fbni(int);

int main(void) {
	int result = 0;
	printf("Please enter a Fibonacci value :");
	scanf("%d", &result);
	fbni(result);
	printf("%d", ans);

}
int fbni(int d)
{

	if (d < ans)
		return 0;

	printf("%d \n", ans);

	ans = n + r;
	n = r;
	r = ans;

	fbni(d - 1);
}