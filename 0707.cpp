/*
Theater Reservation System

	1) There are 10 seats
	2) Marked as 1 for seats that are booked and 0 for seats that are not booked
	3)
		Would you like to make a reservation? ( Y OR N ) Y
		--------------------------------------------
		1 2 3 4 5 6 7 8 10
		--------------------------------------------
		0 0 0 0 0 0 0 0 0
		Which seat would you like to reserve?   1
		Reservations are made.


		--------------------------------------------
		1 2 3 4 5 6 7 8 10
		--------------------------------------------
		1 0 0 0 0 0 0 0  0
		Would you like to make a reservation?   1
		This seat is already reserved. Please choose another seat.
		Would you like to make a reservation? ( Y OR N )   N
		End Program

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 11

void j() {
	int a = 1;
	while (a <= 30) {
		printf("-");
		a++;
	}
	printf("\n");
	a = 1;
	while (a <= 10) {


		printf("%d ", a);
		a++;


	}	printf("\n");

	a = 1;
	while (a <= 30) {
		printf("-");
		a++;
	}
	printf("\n");


}


int main() {

	int seats[max] = { 0 };
	int i = 0;
	char num;
	int bae = 0;

	while (1) {

		bae = 0;
		printf("Would you like to make a reservation?  ( Y OR N ) \n ");
		scanf("%c", &num);
		if (num == 'y' || num == 'Y') {
			j();
			while (bae < 10) {
				printf("%d ", seats[bae + 1]);
				bae++;
			}
			printf("\n");
			printf("Which seat would you like to reserve? ( Y OR N ): \n");
			scanf("%d", &i);
			if (seats)
				if (seats[i] < 10) {
					if (seats[i] < 1) {
						printf("Reservations are made. \n");
					}
					seats[i] = seats[i] + 1;

					if (seats[i] > 1) {

						printf("This seat is already reserved. Please choose another seat. \n");

					}

				}
				else {
					printf("error");
					break;
				}

		}
		else if (num == 'n' || num == 'N')
		{
			printf("Error");
			break;
		}
		getchar();

	}
}



