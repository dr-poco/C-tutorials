#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);

    if (b > 0)
    {
        while (b != 0)
    {
        a++;
        b--;
    }
    }
    else if (b < 0)
    {
        while (b != 0)
        {
            a--;
            b++;
        }
    }
    printf("%d is the answer", a );
    return 0;
}
