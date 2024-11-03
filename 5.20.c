#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#define queuelength 128000000
//+- 88 seconde

void init();
void put();
int get();

int queue[queuelength] = { 0 };

int main(void)
{
    clock_t begin = clock();
    for (int k = 0; k < 100; k++)
    {
        put(2);
        put(29);
        put(430);
        put(4000920);
        put(9000);
        put(4);
        int a = get();
        int b = get();
        int c = get();
        printf("%d", k);
    }
    clock_t end = clock();
    printf("\n%lfms", (double)(end - begin));
    for(int i = 0; i < 128; i++)
    {
        printf("%d ", queue[i]);
    }
}

void init(void)
{
    for(int i = 0; i < queuelength; i++)
    {
        queue[i] = 0;
    }
}

void put(int number)
{
    int i = 0;
    while(queue[i] != 0)
    {
        i++;
        assert(i != queuelength);
    }
    queue[i] = number;
}

int get()
{
    int number = queue[0];
    for(int i = 0; i < queuelength - 1; i++)
    {
        queue[i] = queue [i + 1];
    }
    queue[queuelength] = 0;
    return number;
}