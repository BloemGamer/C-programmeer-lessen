
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