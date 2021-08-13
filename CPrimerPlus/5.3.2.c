/*
2、编写递归函数求Fibonacci数列的第n项，这个数列是这样定义的：
fib(0)=1
fib(1)=1
fib(n)=fib(n-1)+fib(n-2)
上面两个看似毫不相干的问题之间却有一个有意思的联系：
Lamé定理：如果Euclid算法需要k步来计算两个数的GCD，那么这两个数之中较小的一个必然大于等
于Fibonacci数列的第k项。
*/

#include<stdio.h>
int nnn(int n)
{
    if(n==0||n==1)
        return 1;
    else
    {
        int result = nnn(n - 1) + nnn(n - 2);
        return result;
    }
    
}

int main(void)
{
    int n = 4;
    int result = nnn(n);
    printf("%d\n", result);
    return 0;
}

/*
4=3+2=2+1+1+0=5
*/