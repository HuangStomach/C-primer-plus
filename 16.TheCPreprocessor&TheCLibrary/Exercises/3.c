#include <stdio.h>
#include <math.h>

typedef struct polar {
    double r;
    double A;
} Polar;

typedef struct angle {
    double x;
    double y;
} Angle;

Angle conver(Polar *);

int main(void) {
    Polar p = { 10.0, 6.0 };
    Angle a = conver(&p);

    printf("x is %lf, y is %lf\n", a.x, a.y);
    return 0;
}

Angle conver(Polar * p) {
    Angle angle;
    angle.x = p->r * cos(p->A);
    angle.y = p->r * sin(p->A);

    return angle;
}