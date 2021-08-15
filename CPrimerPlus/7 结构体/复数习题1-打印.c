#include <stdio.h>

int structa(double x, double y)
{
    if (y == 0)
        printf("%.1f\n", x);
    else
    {
        if (x == 0)
            printf("%.1fi\n", y);
        else
        {
            if (y > 0)
                printf("%.1f+%.1fi\n", x, y);
            if (y < 0)
                printf("%.1f%.1fi\n", x, y);
        }
    }
    return 0;
}

int main()
{
    double x, y;
    printf("请输入复数的实部和虚部：");
    scanf("%lf %lf", &x, &y);
    structa(x, y);
    return 0;
}