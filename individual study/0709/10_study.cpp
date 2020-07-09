#pragma warning(disable : 4996)
#include <stdio.h>

int main() {

    int a[30][2] = { 0 };
    int avg = 0;
    int b = 0;
    int end = 0;
    int s;
    for (s = 0; s < 30 && end != 999; s++)
    {
        int s_s = 0;
        printf("Enter the student number and score of the %d th student. : \n", s + 1);
        scanf("%d %d", &*(a[s] + s_s), &*(a[s] + s_s + 1));
        end = a[s][s_s];
        if (s < 30 && end != 999)
        {
            avg += a[s][s_s + 1];
            ++b;
        }
    }
    avg /= b;
    printf(" List of students with an average score of %d or higher:", avg);
    for (int i = 0; i < 30; i++)
    {
        if (a[i][1] > avg)
        {
            printf("%d", a[i][0]);
        }
    }
    printf("\n");
}