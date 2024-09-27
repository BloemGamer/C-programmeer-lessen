/*Schrijf een programma dat een positief geheel getal inleest en vervolgens de driehoek van Floyd afdrukt.
In deze driehoek worden getallen oplopend afgedrukt, beginnend bij 1, steeds één getal meer per rij.
De maximale invoer is 44,
dan wordt het getal 999 als hoogste getal afgedrukt.*/

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int r, k, i, g = 1;
	printf("pick a number between 1 and 44\n");
	scanf("%d", &r);
	if (r >= 1 && r <= 44)
	{
		for (i = 1; i <= r; i++)
		{
			for (k = 1; k <= i; k++)
			{
				printf("%3d", g);
				g++;
			}
			printf("\n");
		}
	}
	else
	{
		printf("number is not between 1 and 44");
	}

}