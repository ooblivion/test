#include<stdio.h>
int fff(int n)
{
    if(n == 0)
        return 1;
    else
    {
        int recures = fff(n - 1);
        int result = n * recures;
        return result;
    }
    
}

int main(void)
{
    int n = 222; //limited 0-19
    printf("%d\n", fff(n));
    return 0;
}

//存取 运算 测试 分支 循环/递归