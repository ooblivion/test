#include<stdio.h>
int main(void)
{
    int x;
    printf("please input a num : ");
    scanf("%d", &x);
    if(x<=100){
        printf("the num <= 100");
        return 0;
    }
    if(x>100){
        printf("the num > 100");
        return 0;
    }
    else{
        printf("please input a corrtct num");
    }
}