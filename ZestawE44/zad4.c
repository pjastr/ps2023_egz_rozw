#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

void printList(struct node * list) {
    struct node * tmp = list;
    while (tmp != NULL) {
        printf("%d ", tmp->a);
        tmp = tmp->next;
    }
    printf("\n");
}

void foo(struct node * list) {
    struct node * tmp = list;
    while (tmp != NULL) {
        if (tmp->a % 3 == 0) {
            tmp->a = 0;
        }
        tmp = tmp->next;
    }
}

int main() {
    struct node * list = malloc(sizeof(struct node));
    list->a = 1;
    list->next = malloc(sizeof(struct node));
    list->next->a = 2;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 3;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->a = -6;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->a = 5;
    list->next->next->next->next->next = NULL;
    printList(list);
    foo(list);
    printList(list);
    return 0;
}