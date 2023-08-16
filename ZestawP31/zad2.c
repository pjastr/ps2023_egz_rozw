#include <stdio.h>
#include <stdlib.h>

int foo(char * napis)
{
    int i = 0;
    int licznik = 0;
    while(napis[i] != '\0')
    {
        if(napis[i] == '0' || napis[i] == '2' || napis[i] == '4' || napis[i] == '6' || napis[i] == '8')
        {
            licznik++;
        }
        i++;
        licznik++;
    }
    return licznik;
}

int main()
{
    char napis[] = "abc34";
    printf("%d", foo(napis));
    return 0;
}