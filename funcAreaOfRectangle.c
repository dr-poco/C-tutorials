#include <stdio.h>

int AreaOfRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main()
{
    int l=10, b=4;

    int area = AreaOfRect(l, b);

    printf("%d\n", area);
}
