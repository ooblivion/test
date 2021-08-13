/*
写两个表达式，分别取整数x的个位和十位
*/

#include<stdio.h>
void pr(int x)
{
    if(x >= 10)
    {
        int last, decimal;
        last = x % 10;
        decimal = x / 10 % 10;
        printf("the two num is %d %d\n", last, decimal);
        //or decimal = ((x%100)-last)/10
    }
    else
        printf("the num is invalid");
}
int main(void)
{
    int x = 123471;
    int num;
    printf("%d last num is %d\n", x,x % 10);
    printf("decimal num is %d\n", x/10%10); //将要求的10上面的数变为尾数再取模
    printf("please input a num : \n");
    scanf("%d", &num);
    pr(num);
    return 0;
}