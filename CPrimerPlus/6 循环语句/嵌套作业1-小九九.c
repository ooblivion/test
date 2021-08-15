#include<stdio.h>
void print_numbers(void)
{
    int i, j;
    for(i=1; i<10; ++i) {
        for(j=1; j<=i; ++j)
            printf("%d\t", i * j);
        printf("\n");
    }
}

int main(void)
{
    print_numbers();
    return 0;
}