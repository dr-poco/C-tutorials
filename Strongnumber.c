#include <stdio.h>

int main()
{
    int q, n, i, rem, fact = 1, result = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    q = n;

    while (q != 0)
        {
            rem = q % 10;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q/10;

        }
        if (result == n)
            printf("%d is a strong number", n);
        else
            printf("%d is not a strong number", n);

}
