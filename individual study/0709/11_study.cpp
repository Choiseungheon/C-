
#include <stdio.h>
int main() {

    int a[10] = { 1,2,3,4,5,1,2,3,4,5 };
    int a_a[4][10] =
    {1,2,3,4,5,1,2,3,4,5,
     2,1,3,4,5,2,1,3,4,5,
     6,5,3,4,5,6,3,3,4,5,
     1,2,3,4,5,7,8,9,6,6,};
    int i, j, m;
    printf("correct answer sheet : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (j = 0; j < 4; j++)
    {
        printf("\n %d th student :", j + 1);
        for (m = 0; m < 10; m++)
        {
            if (a_a[j][m] == a[m])
                printf("[%dth: O ]", m + 1);
            else
                printf("[%dth : X ]", m + 1);
        }
        printf("\n");
    }

}