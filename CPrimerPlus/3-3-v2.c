#include<stdio.h>
int i = 2323;
int foo(void)
{
    int i;
    printf("%d\n", i);
    i = 222;
}

int main(void)
{
    foo();
    printf("hello\n");
    foo();
    return 0;
}