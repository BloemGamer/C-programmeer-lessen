/*Ontwerp een programma dat aangeeft of een ingevoerd geheel getal veranderd is ten opzichte van het
vorige ingevoerde getal. Het getal 0 zorgt ervoor dat het programma stopt*/

#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int g, t, v;
	printf("give a number\n");
	scanf("%d", &t);
	do
	{
		printf("give a number\n");
		scanf("%d", &g);
		v = g - t;
		t = g;
		printf("verandering is %d\n", v);
	} while (g != 0);
}