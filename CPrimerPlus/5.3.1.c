/*
、编写递归函数求两个正整数a和b的最大公约数（GCD，Greatest Common Divisor），使
用Euclid算法：
1. 如果a除以b能整除，则最大公约数是b。
2. 否则，最大公约数等于b和a%b的最大公约数。
*/
#include<stdio.h>
//#include<math.h>

int GCD(int a,int b)
{
	if(a%b==0)
	    return b;
	else
	{
		int recurse=GCD(b,a%b);
		return recurse;
	}
}

// int aim(int a, int b)
// {
//     if (a%b == 0)
//         return b;
//     else
//         return GCD(b, a % b);
// }

// int main(void)
// {
//     int a = 22, b = 55
//     int result = aim(a, b);
//     printf("%d\n", result);
//     return 0;
// }


int main(void)
{
	int n1,n2,gcd;
	printf("please enter 2 different integer.\n");
	scanf("%d%d",&n1,&n2);
	gcd=GCD(n1,n2);
	printf("The Greatest Common Divisor if %d and %d is %d.\n",n1,n2,gcd);
	return 0;
}
