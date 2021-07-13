#include <stdio.h>

int main()
{
    int a = 3, b = 4;
    printf("%d\n", a++);
    printf("%d\n", ++a);
    printf("%d\n", a+++b);
    printf("%d\n", a + ++b);
    // printf("%d\n", a+++++b); produces error according to lexical analysis
    printf("%d\n", a++ + ++b);
}
