#include <stdio.h>

int main()
{
    int number, rem, sum = 0, i;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (i = 1; i < number; i++)
    {
        rem = number % i;

        if (rem == 0)
        {
            sum = sum + i;
        }

    }
    if (sum == number)
        printf("%d is a perfect number", number);
    else
        printf("%d is not a perfect number", number);
}
