#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Samochod {
    char marka[50];
    int przebieg;
};

struct Samochod * initSamochod(char marka[], int przebieg) {
    if (przebieg > 0 && strlen(marka) >= 2) {
        struct Samochod *samochod = malloc(sizeof(struct Samochod));
        strcpy(samochod->marka, marka);
        samochod->przebieg = przebieg;
        return samochod;
    }
    return NULL;
}

void zwiekszPrzebieg(struct Samochod *samochod) {
    samochod->przebieg += 1000;
}

int main() {
    struct Samochod *samochod = initSamochod("Fiat", 1000);
    if (samochod != NULL) {
        zwiekszPrzebieg(samochod);
        printf("%d", samochod->przebieg);
    }
    return 0;
}