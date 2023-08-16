#include <stdio.h>
#include <stdlib.h>

int sum_of_min_indexes(int **tab, int n) {
    int min = tab[0][0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++) {
            if (tab[i][j] < min) {
                min = tab[i][j];
                sum = i + j;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++) {
            if (tab[i][j] == min && sum > i + j){
                sum = i + j;
            }
        }
    }
    return sum;
}

int main()
{
    int ** tab = malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        tab[i] = malloc(3 * sizeof(int));
    }
    tab[0][0] = 1;
    tab[0][1] = -5;
    tab[0][2] = 3;
    tab[1][0] = 4;
    tab[1][1] = -5;
    tab[1][2] = 6;
    tab[2][0] = 7;
    tab[2][1] = 8;
    tab[2][2] = -5;
    printf("%d", sum_of_min_indexes(tab, 3));
}