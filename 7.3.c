#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int *make_array();

int main(void)
{
	int *arr;
	int size;
	printf("How many number do you want in the array (> 0)\n");
	scanf("%d", &size);
	arr = make_array(size);
	for(int i = 0; i < size; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int *make_array(int size)
{
	int *make_arr;
	make_arr = malloc(size * sizeof(int));
	for(int i = 0; i < size; i++)
	{
		*(make_arr + i) = i;
	}
	return make_arr;
}
