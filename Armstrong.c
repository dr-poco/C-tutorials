#include <stdio.h>

int main()
{
    int n, count = 0, result = 0, mul = 1, cnt, rem, q;
    printf("Enter a number to check it's a armstrong number or not? :");
    scanf("%d", &n);
    q = n;

    while (q != 0)
    {
        q = q/10;
        count++;
    }

    printf("The order is : %d\n", count);

    cnt = count;
    q = n;

    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }

    if (result == n)
    {
        printf("It's an armstrong number");
    }
    else
        printf("its not an armstrong number");
}
