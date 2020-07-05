#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    float f_kor, f_eng, f_mat, f_total, f_avg;
    char c_grade;

    printf("Please enter a score for 3 subjects \n");
    scanf("%f%f%f", &f_kor, &f_eng, &f_mat);



    f_total = f_kor + f_eng + f_mat;
    f_avg = f_total / 3;

    printf("tot : %.3f \n", f_total);
    printf("avg : %.3f \n", f_avg);

    if (f_avg >= 90) {
        c_grade = 'A';
    }
    else if (f_avg >= 80 && f_avg < 80.43) {
        c_grade = 'B';

    }
    else if (f_avg >= 70 && f_avg < 70.51) {
        c_grade = 'C';

    }
    else if (f_avg >= 60 && f_avg < 60.61) {
        c_grade = 'D';

    }
    else if (f_avg < 50) {

        c_grade = 'F';
    }

    printf("My grade : %c", c_grade);
}