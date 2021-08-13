/*
编写程序数一下1到100的所有整数中出现多少次数字9。在写程序之前先把这些问题考虑清楚：

这个问题中的循环变量是什么？
这个问题中的累加器是什么？用加法还是用乘法累积？
在第 2 节 “if/else语句”的习题1写过取一个整数的个位和十位的表达式，这两个表达式怎样用到程序中？
*/

#include<stdio.h>
int count(void) {
    int i, count=1;
    for(i=98; i<=100; ++i) {
        if(i/9==0 || i%10 == 9) {
            ++count;
        }
    }
    return count;
}
int main(void)
{
    int i = count();
    printf("%d\n", i);
    return 0;
}