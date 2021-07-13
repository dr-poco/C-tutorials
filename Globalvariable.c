#include <stdio.h>

int fun();
int var = 10;

int main()
{
    int var = 4;
    printf("%d", var);
    fun();   // calling the function //
    return 0;
}

int fun()
{
    printf("%d", var);
}
