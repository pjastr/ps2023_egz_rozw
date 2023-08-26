#include <stdio.h>
#include <stdlib.h>

int foo(wchar_t* napis) {
    if (napis[0] < L'0' || napis[0] > L'9' ||
        napis[1] < L'0' || napis[1] > L'9' ||
        napis[2] < L'0' || napis[2] > L'9') {
        return 0;
    }
    return (napis[0] - L'0') * 100 + (napis[1] - L'0') * 10 + (napis[2] - L'0');
}

int main() {
    wchar_t napis[4] = L"123";
    printf("%d", foo(napis));
}