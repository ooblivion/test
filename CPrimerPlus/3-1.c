#include <math.h>
#include <stdio.h>
int main(void)
{
    double pi = 3.14;
    printf("sin(pi/2)=%f\nln1=%f\n", sin(pi / 2), log(1.0));
    return 0;
}

//math库编译的时候 gcc xxx.c -lm 由于数学函数库在libm.so里面
//其他大部分用到的函数库在libc里面，是默认的就不用加 -lc