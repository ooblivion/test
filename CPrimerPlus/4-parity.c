#include<stdio.h>
void test(int x)
{
    if(x % 2 == 0)
        printf("%d is even\n", x);
    else
        printf("%d is odd\n", x);
}

int main(void)
{
    int num;
    printf("please input num :\n");
    scanf("%d", &num);
    test(num);
    return 0;
}