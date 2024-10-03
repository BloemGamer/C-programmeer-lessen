/*Schrijf een programma dat steeds het voortschrijdend gemiddelde bepaalt van de laatste 10 koersstanden*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define amount 15

int main (void)
{
    double data[amount];
    int i, j;
    double aver;
    
    for (i = 0; i < amount; i = i + 1)
    {
        do 
        {
            printf("Give data %d: ", i + 1);
        } while (scanf("%lf", &data[i]) != 1);
    }
    
    i = 0;
    
    for(j = 0; j < amount - 10; j++)
    {
        aver = 0.0;

        while(i < j + 10)
        {
            aver = aver + (data[i]);
            i++;
        }
        i = i - 9;
        printf("%lf\n", aver/10);
    }
}