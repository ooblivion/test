#include <stdio.h>
// void diamod(int num, char graph)
// {
//     if (!num & 1)
//     { // %2 == 0
//         printf("wrong\n");
//         return;
//     }
//     int i, j, count;
//     count = -1;
//     for (i = num / 2; i >= 0; --i)
//     {
//         count += 2;
//         for (j = i; j > 0; --j)
//             printf("\t");
//         for (j = count; j > 0; --j)
//             printf("%c\t", graph);
//         printf("\n");
//     }

//     for (i = num / 2 + 1; i < num; ++i)
//     {
//         for (j = i - num / 2; j > 0; --j)
//             printf("\t");
//         for (j = count - 2; j > 0; --j)
//             printf("%c\t", graph);
//         printf("\n");
//         count -= 2;
//     }
// }

void diamond(int n, char c)
{
    int i, j;
    if (n <= 0 || !(n % 2))
        printf("Wrong!\n");
        return;
    for (i = 1; i <= n / 2 + 1; i++)
    {
        for (j = 1; j <= n / 2 - i + 1; j++)
            printf("\t");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c\t", c);
        printf("\n");
    }
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= i; j++)
            printf("\t");
        for (j = 1; j <= n - 2 * i; j++)
            printf("%c\t", c);
        printf("\n");
    }
}

int main(void)
{
    diamond(6, '*');
    return 0;
}