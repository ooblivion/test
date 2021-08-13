/*
以下是程序段编译能通过，执行也不出错，但是执行结果不正确（根据第 3 节 “程序的调试”，这是一个语义错误）
请分析一下哪里错了。还有，既然错了为什么编译能通过呢？

if (x > 0);
printf("x is positive.\n");
*/

#include<stdio.h>
int main(void)
{
    int x = 1;
    if (x > 0); //if判断后有个分号;(空语句), 因为这不是语法错误，所以能够编译通过
    printf("x is positive.\n");
    return 0;
}