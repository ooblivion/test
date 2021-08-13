#include <stdio.h>
void print_time(int hour, int minute)
{
    printf("%d:%d\n", hour, minute);
}

int main(void)
{
    int h = 23, m = 59;
    print_time(h, m);
    /*
    equal
    int hour = h, mintue = m;
    peintf("%d:%d", hour, mintue);
    */
    return 0;
}

//23是实参-argument 上面那个函数中的hour是形参-parameter
//这样的传递叫值传递 call by value