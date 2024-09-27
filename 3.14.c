/*Make a calculator which can multiply, devide, substract and add*/

#include <stdio.h>
#include <math.h>

double mult();
double dev();
double add();
double sub();

int main (void)
{
    double a, b;
    char c;

    printf("give 2 numbers with a math symbol in between (* / + -)\n");
    scanf("%lf %c %lf", &a, &c, &b);
    printf("%lf %c %lf\n", a, c, b);

    switch (c)
    {
        case '*':
            printf("%lf", mult(a, b)); break;
        case '/':
            printf("%lf", dev(a, b)); break;
        case '+':
            printf("%lf", add(a, b)); break;
        case '-':
            printf("%lf", sub(a, b)); break;
        default:
            printf("TF are you doing?"); break;
    }
}

double mult(double ma, double mb)
{
    return (ma * mb);
}

double dev(double da, double db)
{
    return (da / db);
}

double add(double aa, double ab)
{
    return (aa + ab);
}

double sub(double sa, double sb)
{
    return (sa - sb);
}