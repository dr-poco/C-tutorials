#include <stdio.h>

int main()
{
    int var = 3;
    {
        int var = 8;
        printf("%d", var);
    }
    printf("%d", var);
    return 0;
}
