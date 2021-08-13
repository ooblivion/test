#include<stdio.h>
void increment(int x)
{
    x = x + 1;
}
/*
这个increment函数能奏效吗？为什么？
不能，因为在函数increment（）内部，是形参x自加1，并没有将x赋给i或j，而在函数increment()调用完后，函数的栈就自行释放，x就算自加1，也是被释放掉，所以该自加1就没有任何意义，注意：变量i,j和形参x是不同的量。
*/

int change(int x)
{
    x = x + 1;
    return x;
}

// num是错误的做法 n是正确的
int main(void)
{
    int num;
    int m;
    printf("please input a number: \n");
    scanf("%d", &num);
    increment(num);
    printf("what you input add 1 equal %d\n", num);
    m = num;
    m = change(m);
    printf("what you input add 1 equal %d\n", m);
    return 0;
}