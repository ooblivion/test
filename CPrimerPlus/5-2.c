#include<stdio.h>
#include<math.h>
double radius(double x1, double y1, double x2, double y2)
{
    double xx = x1 - x2;
    double yy = y1 - y2;
    double dd = xx * xx + yy * yy;
    double result = sqrt(dd);
    printf("%f\n", dd);
    return result;
    //return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
}

double area(double radius)
{
    return 3.1416 * radius * radius;
}

int main(void)
{
    double x1, y1, x2, y2;
    printf("pleasae input a point address: \n");
    scanf("%lf %lf", &x1, &y1);
    printf("please input another point address: \n");
    scanf("%lf %lf", &x2, &y2);
    printf("radius is %f\n", radius(x1, y1, x2, y2));
    //printf("distance is %f\n", ans(1.0, 2.0, 4.0, 6.0));
    //radius = radius;
    //printf("area is %f", area());  
    return 0;
}