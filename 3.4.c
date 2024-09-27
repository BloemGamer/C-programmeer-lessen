/*Schrijf een programma dat het kleinste en één na kleinste getal bepaalt uit een aantal opgegeven gehele
getallen. De rij wordt afgesloten met het getal 0.*/

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int c, k=999, ek=999;
	do
	{
		printf("give a number under 999\n");
		scanf("%d", &c);
		if (c != 0)
		{
			if (c <= k)
			{
				ek = k;
				k = c;
			}
			else if (c <= ek)
			{
				ek = c;
			}
		}

	} while (c != 0);
	printf("kleinste is %d, een na kleinste is %d", k, ek);

}