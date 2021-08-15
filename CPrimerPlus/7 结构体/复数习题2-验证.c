#include <math.h>
#include <stdio.h>

double x, y, x1, x2, yy, y2;
struct complex_struct
{
    double x, y;
} z, z1, z2;

double real_part(struct complex_struct z)

{
    return z.x;
}

double img_part(struct complex_struct z)

{

    return z.y;
}

double magnitude(struct complex_struct z)

{

    return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)

{

    return atan2(z.y, z.x);
}
/****************************************************************************************/

struct complex_struct make_from_real_img(double x, double y)

{

    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}

struct complex_struct make_from_mag_ang(double r, double A)

{

    struct complex_struct z;
    z.x = r * cos(A);
    z.y = r * sin(A);
    return z;
}
/***********************************************************************************************/

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)

{
    return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2)

{
    return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2)

{
    return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2)

{
    return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

int struct_P(struct complex_struct z)
{
    if (z.y == 0)
        printf("%.1f\n", z.x);
    else
    {
        if (z.x == 0)
            printf("%.1fi\n", z.y);
        else
        {
            if (z.y > 0)
                printf("%.1f+%.1fi\n", z.x, z.y);
            if (z.y < 0)
                printf("%.1f%.1fi\n", z.x, z.y);
        }
    }
    return 0;
}

int main()
{
    printf("please enter the parameters of complex:");
    scanf("%lf%lf%lf%lf", &x1, &yy, &x2, &y2);
    //struct complex_struct z ;
    z1.x = x1;
    z1.y = yy;
    z2.x = x2;
    z2.y = y2;
    printf("z1=");
    struct_P(z1);
    printf("z2=");
    struct_P(z2);
    printf("z1+z2=");
    z = add_complex(z1, z2);
    struct_P(z);
    printf("z1-z2=");
    z = sub_complex(z1, z2);
    struct_P(z);
    printf("z1*z2=");
    z = mul_complex(z1, z2);
    struct_P(z);
    printf("z1/z2=");
    z = div_complex(z1, z2);
    struct_P(z);
    return 0;
}
