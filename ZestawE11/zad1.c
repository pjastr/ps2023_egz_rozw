int * foo(char * a, char * b, int x)
{
    int * temp = malloc(sizeof(int));
    *temp = x;
    return temp;
}

int main()
{
    char * a = "a";
    char * b = "b";
    int x = 1;
    int * temp = foo(a, b, x);
    printf("%d", *temp);
    free(temp);
    return 0;
}