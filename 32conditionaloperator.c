#include <stdio.h>

int main()
{
    int var = 75;
    int var2 = 56;
    int num;
    int a, b, c;

    a = (var == 75) ? 'A' : 0;
    printf("%d\n", a);

    b = var2 > 23 ? a : 0;
    printf("%d\n", b);

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d\n", num);

    printf("%d",'A');

    return 0;
}
