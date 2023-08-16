#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

//funkcja pomocnicza sprawdzająca czy liczba całkowita moze byc kwadratem innej liczby całkowitej
int isSquare(int n) {
    int i =0;
    while (i*i <= n) {
        if ((i*i) == n) {
            return 1;
        }
        i++;
    }
    return 0;
}

void printSquares(struct node * list) {
    struct node * tmp = list;
    while (tmp != NULL) {
        if (isSquare(tmp->i)) {
            printf("%d\n", tmp->i);
        }
        tmp = tmp->next;
    }
}

int main() {
    struct node *list = malloc(sizeof(struct node));
    list->i = 4;
    list->next = malloc(sizeof(struct node));
    list->next->i = -5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 6;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = 25;
    list->next->next->next->next = NULL;
    printSquares(list);
}