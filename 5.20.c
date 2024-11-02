#include <stdio.h>
#include <string.h>
#include <assert.h>

void init();
void put();
int get();

int queue[128] = { 0 };

int main(void)
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

    for(int i = 0; i < 128; i++)
    {
        printf("%d ", queue[i]);
    }
}

void init(void)
{
    for(int i = 0; i < 128; i++)
    {
        queue[i] = 0;
    }
}

void put(int number)
{
    int i = 0;
    int j = 128;
    while(queue[i] != 0)
    {
        i++;
        assert(i != j);
    }
    queue[i] = number;
}

int get()
{
    int number = queue[0];
    for(int i = 0; i < 127; i++)
    {
        queue[i] = queue [i + 1];
    }
    queue[128] = 0;
    return number;
}