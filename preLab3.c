#include <stdio.h>

int main(void)
{
    int counter = 1;
    while(counter <= 50)
    {
        if(counter%5 == 0 && counter%3 == 0)
        {
            printf("Fizz Buzz");
        } 
        else if(counter%3 == 0)
        {
            printf("Fizz");
        } 
        else if(counter%5 == 0)
        {
            printf("Buzz");
        }
        else{
            printf("%d",counter);
        }
        if(counter != 50)
        {
            printf(", ");
        }
        counter++;
    }
    printf("\n");
}