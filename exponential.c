#include <stdio.h>

int main()
{
    int power, expo, base, result, exponential;
    double power1 = 1.0;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponential : ");
    scanf("%d", &exponential);

    expo = exponential;
    power = 1;
    result = 0;

    if (exponential > 0)
    {

    while(expo != 0)
    {
        power = power * base;
        expo--;
    }
    printf("%d exponential %d is equal to %d", base, exponential, power);

    }
    else
    {
        while(expo != 0)
        {
            power1 = power1*(1.0/base);
            expo++;
        }
        printf("%d exponential %d is equal to %.10f", base, exponential, power1);
    }

}
