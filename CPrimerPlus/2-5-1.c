#include <stdio.h>

int main(void)
{
    int x = 18, n = 4;
    printf("floor %d\n", x / n);
    printf("celling %d\n", (x + n - 1) / n);
    return 0;

    // int x = 
    // int n = 
    // if(x>=0)
    // {
    //     printf("floor %d\n", x / n);
    //     printf("celling %d\n", (x + n - 1) / n);
    //     return 0;
    // }
    // if(x<0)
    // {
    //     printf("floor %d\n", x / n);
    //     printf("celling %d\n", x/n -(n-1)/n);
    //     return 0;
    // }
}

/*
假设变量x和n是两个正整数,我们知道 x/n 这个表达式的结果是取Floor,例
如x是17,n是4,则结果是4。如果希望结果取Ceiling应该怎么写表达式呢?例
如x是17,n是4,则结果是5,而x是16,n是4,则结果是4。

答案是(x+n-1)/n。
先拆成x/n+(n-1)/n来看，如果x/n还能余出一点儿来，
合写成(x+n-1)/n就可以把余出来的那一点儿给(n-1)，从而使(n-1)/n等于1。
*/