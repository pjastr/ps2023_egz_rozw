#include <stdio.h>
#include <stdlib.h>

struct element {
    float x;
    struct element * next;
};

float sum(struct element *list1, struct element *list2) {
    float sum = 0;
    while (list1->next != NULL) {
        list1 = list1->next;
        sum += list1->x * list1->x;
    }
    while (list2->next != NULL) {
        list2 = list2->next;
        sum += list2->x * list2->x;
    }
    return sum;
}

int main()
{
    struct element *list1 = malloc(sizeof(struct element));
    list1->next = malloc(sizeof(struct element));
    list1->next->x = 1;
    list1->next->next = malloc(sizeof(struct element));
    list1->next->next->x = 2;
    list1->next->next->next = NULL;
    struct element *list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -3;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 4;
    list2->next->next->next = malloc(sizeof(struct element));
    list2->next->next->next->x = 0;
    list2->next->next->next->next = NULL;
    printf("%f", sum(list1, list2));
    return 0;
}