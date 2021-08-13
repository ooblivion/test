#include <stdio.h>
void fun(void)
{
    printf("\n");
}

void three_fun(void)
{
    fun();
    fun();
    fun();
    fun();
}

int main(void)
{
    printf("this is first line\n");
    fun();
    fun();
    printf("this is the last line\n");
    three_fun();
    printf("hhh");
    return 0;
}