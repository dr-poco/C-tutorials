#include <stdio.h>

int main()
{

    int a, b, i = 1, n, c;
    printf("How many numbers you want ?");
    scanf("%d", &n);

    a = 0;
    b = 1;


    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a );
        c = a + b;
        a = b;
        b = c;
    }

}
