#include <stdio.h>
int left = 0;
int right = 1;
int ans = 0;
int fbni(int);

int main(void) {
	int result = 0;
	printf("피보나치 수열 값을 입력하세요 :");
	scanf("%d",&result);
	fbni(result);
	printf("%d", ans);

}
int fbni(int d) 
{

	if (d < ans)
	 	return 0;
	
	printf("%d \n", ans);

	ans = left + right;
	left = right;
	right = ans;
	
	fbni(d - 1);
}