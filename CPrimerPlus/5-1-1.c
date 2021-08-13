/*
编写一个布尔函数 int is_leap_year(int year) ，判断参数 year 是不是闰年。
如果某一年的年份能被4整除，但不能被100整除，那么这一年就是闰年，此外，能被400整除的年份也是闰
年。*/
#include<stdio.h>
int is_leap_year(int y)
{
    if (y%4==0 && y%100!=0)
    {
        printf("this is\n");
    }else if (y%400==0)
    {
        printf("this is\n");
    }else
    {
        printf("not\n");
    }
}

int main(void)
{
    int ye = 2020;
    is_leap_year(ye);
    return 0;
}

