#include <stdio.h>
#include <stdlib.h>

int findElement(int *tab, int n, int val, int (*isEqual)(int, int)) {
    for (int i = 0; i < n; i++) {
        if (isEqual(tab[i], val)) {
            return i;
        }
    }
    return -1;
}

//klasyczna funkcja
int isEqual(int a, int b) {
    return a == b;
}

//mniej standardowa funkcja
int isEqual2(int a, int b) {
    return a % b == 0;
}

int main()
{
    int tab[] = {1, 2, -3, 41, 5, 6, 7, 8};
    int n = 8;
    int val = 4;
    int index = findElement(tab, n, val, isEqual);
    printf("Index: %d\n", index);
    index = findElement(tab, n, val, isEqual2);
    printf("Index: %d\n", index);
    return 0;
}