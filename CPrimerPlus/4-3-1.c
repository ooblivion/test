#include <stdio.h>
int main(void)
{
    int x = 2;
    if (x < 10 && x > 0)
        printf(" %d is in the range\n", x);
    else
        printf("%d is out of range\n");

    int s = 100;
    if (s >= 10 || s <= 0)
        printf("%d is out of range\n", s);
}