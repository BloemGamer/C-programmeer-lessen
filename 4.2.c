/*Schrijf een functie die twee argumenten meekrijgt en de vermenigvuldiging van deze twee argumenten
teruggeeft.*/

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

double mult();

int main(void)
{
	double a, b;
	int i;
	char t;

	printf("Do you want to test? (y)?\n");
	scanf("%c", &t);

	switch (t)
	{
		case 'y':
			i = 0; break;
		default:
			i = 19; break;
	}

	printf("Give 2 numbers to multiply\n");
	scanf("%lf %lf", &a, &b);
	while (i < 20)
	{
		printf("%lf * %lf = %lf\n", a, b, mult(a, b));
		a = a + 0.5;
		b = b - 0.5;
		i++;
	}
}

double mult(double va, double vb)
{
	return (va * vb);
}
