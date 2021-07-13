// *, /, %, +, - precedence //
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a : \n");
    scanf("%d", &a);
    printf("Enter b : \n");
    scanf("%d", &b);
    printf("Enter c : \n");
    scanf("%d", &c);
    printf("Enter d : \n");
    scanf("%d", &d);

    printf("a * b / c = %d\n", a*b/c);
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * d - c %% a = %d\n", a+b*d-c%a);
    return 0;
}
