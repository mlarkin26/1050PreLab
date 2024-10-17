#include <stdio.h>

int main(void)
{
    int array[20];
    int total = 0;
    for(size_t i = 0; i<20; i++)
    {
        array[i] = i+1;
    }
    for(size_t i = 0; i<20; i++)
    {
        printf("array[%ld]=%d\n",i,array[i]);
        total+=array[i];
    }
    printf("Total of all elements = %d\nAverage = %.2f\n",total,total/20.0);
}