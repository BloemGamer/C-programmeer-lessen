/*Schrijf een programma die de kwadraten en derde machten van 1 t / m 10 afdrukt.Gebruik een for‐
statement voor het opzetten van de herhaling.*/

#include <stdio.h>
#include <math.h>

int main(void)
{

    int i;
    double a, b= 2, c = 3, d = 1;
    
    for(i = 0; i < 10; i++)
    {
        a = pow(d, b);
        printf("%lf ^ %lf = %lf\n", d, b, a);
        a = pow(d, c);
        printf("%lf ^ %lf = %lf\n", d, c, a);
        d++;
    }
}