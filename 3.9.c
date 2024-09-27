/*Ontwerp een programma dat de gebruiker vraagt om positieve gehele getallen in te voeren met een maxi‐
mum van 10. Dit programma moet net zo lang getallen inlezen totdat het getal 0 wordt ingevoerd. Hierna
moet het programma afdrukken hoeveel voldoendes (6⋯10) en hoeveel onvoldoendes (1⋯5) door de ge‐
bruiker zijn ingevoerd.*/

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int c, v=0, o=0;
	
	do
	{
		printf("give a grade between 1 and 10\n");
		scanf("%d", &c);
		switch (c)
		{
			case 10:
			case 9:
			case 8:
			case 7:
			case 6:
				v++; break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
				o++; break;
			default:
				printf("not a grade");

		}
	} while (c != 0);

	printf("%d voldoendes, %d onvoldoendes", v, o);
}