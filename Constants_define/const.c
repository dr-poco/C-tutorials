#include <stdio.h>

int main()
{
    const int var = 34; // 'const' key word produces error. coz it can't be changed //
    var = 89;
    printf("%d", var);
    return 0;
}
