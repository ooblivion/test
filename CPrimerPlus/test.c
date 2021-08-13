#include<stdio.h>
int count(void) {
    int i, count=0;
    for (i = 1; i <= 100; i++)
    {
        if(i/10==9)
            count++;
        if(i%10 == 9)
            count++;
    }

    return count;
}

int main(void)
{
    int i = count();
    printf("%d\n", i);
    return 0;
}