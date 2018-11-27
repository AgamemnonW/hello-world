#include <stdio.h>
#include <math.h>
#include <assert.h>

int main()
{
double a, b, c, d, e, f;
scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
assert(fabs(a*e - d*b) < 1.0*e - 8);
printf("x=%lf\ny=%lf\n", (c*e - b*f) / (a*c - d*b), (d*c - a*f) / (d*b - a*c));
return 0;
}
