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


    struct punt p1;
    struct punt p2;
    struct punt p3;
    struct punt p4;
    struct punt p5;

    printf("Give a x and y coordinate for point 1 to 5\n");
    printf("point 1\n");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("point 2\n");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("point 3\n");
    scanf("%lf %lf", &p3.x, &p3.y);
    printf("point 4\n");
    scanf("%lf %lf", &p4.x, &p4.y);
    printf("point 5\n");
    scanf("%lf %lf", &p5.x, &p5.y);
    printf("%lf", (pyth(p1, p2) + pyth(p2, p3) + pyth(p3, p4) + pyth(p4, p5) + pyth (p5, p1)));
}

double pyth(struct punt a, struct punt b)
{
    double r;
    r = sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
    return r;
}