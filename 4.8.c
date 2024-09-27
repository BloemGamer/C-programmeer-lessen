/*Ontwerp een programma dat aan de gebruiker een vijftal gehele getallen vraag en het maximum van deze
getallen afdrukt. Hiervoor moet een aantal functies geschreven en gebruikt worden:
• max2 function
• max5 function
• leesGetal function*/


#include <stdio.h>
#include <math.h>

int max2();
int max5();
int leesGetal();

int main (void)
{
    printf("MAX = %d", max5(leesGetal(), leesGetal(), leesGetal(), leesGetal(), leesGetal()));
}

int max2(int a1, int a2)
{
    int m2;
    if (a1 > a2) 
    {
        m2 = a1;
    }
    else 
    {
        m2 = a2;
    }
    return m2;
}

int max5(int b1, int b2, int b3, int b4, int b5)
{
    int m5;
    m5 = max2(max2(max2(b1, b2), max2(b3, b4)), b5);
    return m5;
}

int leesGetal()
{
    int g;

    printf("give a number\n");
    scanf("%d", &g);
    return g;
}
