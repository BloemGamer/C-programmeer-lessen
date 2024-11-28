#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int highest_number();
int *make_array();

int main(void)
{
	int *arr;
	int size, number;
	do
	{
		printf("How many number do you want in the array (> 0)\n");
		scanf("%d", &size);
	}while(size < 0);
	arr = make_array(size);
	number = highest_number(size, arr);

	printf("The highest number is: %d", number);
}

int highest_number(int size, int *array)
{
	int highest;
	for(int i = 0; i < size; i++)
	{
		highest = __max(highest, *(array + i));
	}
	return highest;
}

int *make_array(int size)
{
	int *make_arr;
	make_arr = malloc(size * sizeof(int));
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		printf("Give a number\n");
		scanf("%d", (make_arr + i));
	}
	return make_arr;
}