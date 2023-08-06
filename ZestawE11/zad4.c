#include <stdio.h>
#include <stdlib.h>

struct node {
    float value;
    struct node * next;
};

struct node * ostatnia_dodania(struct node * list) {
    struct node * last_positive = NULL;
    struct node * current = list->next;
    while (current != NULL) {
        if (current->value > 0) {
            last_positive = current;
        }
        current = current->next;
    }
    return last_positive;
}

void print_list(struct node * list) {
    struct node * current = list->next;
    while (current != NULL) {
        printf("%f %p\n", current->value, current);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    //przyklad pozytywny
    struct node * lista = malloc(sizeof(struct node));
    lista->next = malloc(sizeof(struct node));
    lista->next->value = 12;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->value = 13;
    lista->next->next->next = malloc(sizeof(struct node));
    lista->next->next->next->value = -14;
    lista->next->next->next->next = NULL;
    print_list(lista);
    printf("%p\n", ostatnia_dodania(lista));
    //przyklad bez dodatnich liczb
    struct node * lista2 = malloc(sizeof(struct node));
    lista2->next = malloc(sizeof(struct node));
    lista2->next->value = -12;
    lista2->next->next = malloc(sizeof(struct node));
    lista2->next->next->value = -13;
    lista2->next->next->next = NULL;
    print_list(lista2);
    printf("%p\n", ostatnia_dodania(lista2));
}