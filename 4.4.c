#include <stdio.h>
#include <math.h>

size_t faculteit();

int main(void)
{
    size_t getal, c;
    do{
        printf("kies een getal >= 0\n");
        scanf("%d", &getal);
    }while (getal <= 0);
    c = (faculteit(2 * getal)/(faculteit(getal + 1) * faculteit(getal)));
    printf("%d", c);
}

size_t faculteit(size_t n)
{
    size_t antwoord = 1;
    if(n <= 1)
    {
        return 1;
    }
    antwoord = n * faculteit(n-1);
    return antwoord;
}