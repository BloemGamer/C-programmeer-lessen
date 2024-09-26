
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