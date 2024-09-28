/*Schrijf een functie int kgv(int a, int b) die de kgv van twee getallen bepaalt. Schrijf verder een func‐
tie int ggd(int a, int b) die de ggd van twee getallen bepaalt door gebruik te maken van de recursieve
identiteit.*/

#include <stdio.h>
#include <math.h>

int kgv();
int ggd();

int main(void)
{
    int a, b;
    do
    {
        printf("Give 2 whole positive numbers\n");
        scanf("%d %d", &a, &b);
    }while (a < 0 || b < 0);
    printf("kgv = %d, ggd = %d", kgv (a, b), ggd(a, b));

}

int kgv(int a, int b)
{
    return (a * b / ggd(a, b));
}

int ggd (int a, int b)
{           
    if(b > 0)
    {
        return ggd(b, a % b);
    }
    else
    {
        return a;
    }
}