#include<stdio.h>
int main(void)
{
    int x = 10;
    switch (x == 100)
    {
    case 1:
        printf("equal\n");
        break;

    case 0:
        printf("not equal 100\n");
        break;

    default:
        printf("invalid\n");
        break;
    }
}