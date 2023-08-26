#include <stdio.h>
#include <stdlib.h>

void swap_rows(int **tab, int n, int m) {
    if (n < 4) return;
    int *temp = tab[1];
    tab[1] = tab[n - 2];
    tab[n - 2] = temp;
}

void print_tab(int **tab, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 4;
    int m = 3;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        tab[i] = malloc(m * sizeof(int));
    }
    tab[0][0] = 2;
    tab[0][1] = 3;
    tab[0][2] = -3;
    tab[1][0] = 1;
    tab[1][1] = 4;
    tab[1][2] = 7;
    tab[2][0] = -3;
    tab[2][1] = -6;
    tab[2][2] = 11;
    tab[3][0] = -2;
    tab[3][1] = 8;
    tab[3][2] = 23;
    print_tab(tab, n, m);
    printf("\n");
    swap_rows(tab, n, m);
    print_tab(tab, n, m);
    return 0;
}