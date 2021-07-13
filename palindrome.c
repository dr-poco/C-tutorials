#include <stdio.h>

int main()
{
    int n, q, r, results;
    results = 0;
    printf("Enter a number to check it's a palindrome or not? \n");
    scanf("%d", &n);
    q = n;

    while (q != 0)
    {
        r = q%10;
        results = results*10 + r;
        q = q/10;
    }
    if (results == n)
    {
        printf("Its a palindrome");
    }
    else
        printf("Not a palindrome");
    return 0;
}
