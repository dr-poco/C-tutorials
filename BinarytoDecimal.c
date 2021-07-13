#include <stdio.h>

int main()
{
    int binary, rem, decimal = 0, base = 1, num;

    printf("enter the binary number : ");
    scanf("%d", &binary);

    num = binary;

    while(binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem*base;
        binary = binary / 10;
        base = base*2;

    }
    printf("Decimal equivalent of the binary number %d is : %d", num, decimal );
    return 0;
}
