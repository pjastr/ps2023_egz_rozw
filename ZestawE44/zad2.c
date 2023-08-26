#include <stdio.h>

void triple_double_value(double *x){
    *x = *x * 3;
}

int main() {
    double x = 5;
    printf("x = %lf\n", x);
    triple_double_value(&x);
    printf("x = %lf\n", x);
    return 0;
}