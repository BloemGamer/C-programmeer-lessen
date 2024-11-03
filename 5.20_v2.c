#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <time.h>

#define queuelength 128000000
//13ms

struct queue
{
    int start, end;
    int queue[queuelength];
};
struct queue queue;

void init();
void put();
int get();

int main(void)
{
    init();
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

    int j = queue.start;
    while(j != queue.end)
    {
        printf("%d ", queue.queue[j]);
        j++;
        if(j == queuelength)
    {
        j = 0;
    }
    }
}

void init(void)
{
    queue.start = 0;
    queue.end = 0;
}

void put(int number)
{
    queue.end++;
    if(queue.end == queuelength)
    {
        queue.end = 0;
    }
    assert(queue.end != queue.start && "queue full");
    queue.queue[queue.end] = number;
}

int get()
{
    assert(queue.end != queue.start && "queue empty");
    int number = queue.queue[queue.start];
    queue.start++;
    if(queue.start == queuelength)
    {
        queue.start = 0;
    }
    return number;
}