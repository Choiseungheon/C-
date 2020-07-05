/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include<stdio.h>

int main() {

	int a = 5, result = 0;

	while (a >= 1) {
	    result = 5;
		while (result >= a) {
			
			printf("%d", result);
			result--;
			
		}
		printf("\n");
		
		a--;
	}

}