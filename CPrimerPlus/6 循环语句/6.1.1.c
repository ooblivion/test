#include<stdio.h>
int w_GCD(int a, int b)
{
    while(a%b != 0){
        int tem = a;
        a = b;
        b = a % b;
    }
    return b;
}

int w_nnn(int n)
{
    int i, sum = 1, before = 1;
    for ( i = 1; i < n; ++i)
    {
        sum += before;
        before = sum;
    }
    return sum;
}

int main(void)
{
    int result = w_nnn(4);
    printf("%d\n", result);
    return 0;
}