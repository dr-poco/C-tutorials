#include <stdio.h>

int main()

{
    float var = 3.142345678345234;
    double var1 = 3.142345678345234;
    long double var2 =  3.14278345232323;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var);
    printf("%.16f\n", var1);
    printf("%.21Lf\n", var2);

    int var4 = 4/9;
    printf("%d\n", var4);

    float var5 = 4/9;
    printf("%.2f\n", var5);

    float var6 = 4.0/9.0;
    printf("%.2f\n", var6);


}
