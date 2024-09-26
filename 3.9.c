
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