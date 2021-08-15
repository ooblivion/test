#include <stdio.h>
//具有实部、虚部、模和幅角的复数
struct complex_struct
{
    double x, y;
};
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
    double PI = acos(-1.0);
    if (z.x > 0)
        return atan(z.y / z.x);
    else
        return atan(z.y / z.x) + PI;
}

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

//复数的加减乘除运算
struct complex_struct add_complex(struct complex_struct z1, struct
                                  complex_struct z2)
{
    return make_from_real_img(real_part(z1) + real_part(z2),
                              img_part(z1) + img_part(z2));
}
struct complex_struct sub_complex(struct complex_struct z1, struct
                                  complex_struct z2)
{
    return make_from_real_img(real_part(z1) - real_part(z2),
                              img_part(z1) - img_part(z2));
}
struct complex_struct mul_complex(struct complex_struct z1, struct
                                  complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1) * magnitude(z2),
                             angle(z1) + angle(z2));
}
struct complex_struct div_complex(struct complex_struct z1, struct
                                  complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1) / magnitude(z2),
                             angle(z1) - angle(z2));
}

// 改为用极座标来存储
// struct complex_struct
// {
//     double r, A;
// };
// double real_part(struct complex_struct z)
// {
//     return z.r * cos(z.A);
// }
// double img_part(struct complex_struct z)
// {
//     return z.r * sin(z.A);
// }
// double magnitude(struct complex_struct z)
// {
//     return z.r;
// }
// double angle(struct complex_struct z)
// {
//     return z.A;
// }
// struct complex_struct make_from_real_img(double x, double y)
// {
//     struct complex_struct z;
//     double PI = acos(-1.0);
//     z.r = sqrt(x * x + y * y);
//     if (x > 0)
//         z.A = atan(y / x);
//     else
//         z.A = atan(y / x) + PI;
//     return z;
// }
// struct complex_struct make_from_mag_ang(double r, double A)
// {
//     struct complex_struct z;
//     z.r = r;
//     z.A = A;
//     return z;
// }


