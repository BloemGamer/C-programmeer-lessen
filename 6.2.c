#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct punt
{
    double x, y;
};

double pyth();

int main(void)
{
    struct punt p1, p2;

    printf("Give a x and y coordinate for point 1 and 2\n");
    printf("point 1\n");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("point 2\n");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("%lf", pyth(p1, p2));
}

double pyth(struct punt a, struct punt b)
{
    double r;
    r = sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
    return r;
}