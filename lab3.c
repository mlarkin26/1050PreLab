/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 3
* By Michael Larkin (mjlktk)
* September 6th, 2024
*****************************************************************************/
#include <stdio.h>

int main(void)
{
    int evenCounter = 2;//declaring counter that starts at 2 
    while(evenCounter <= 300)//will loop until evenCounter is larger than 300
    {
        if(evenCounter%3 == 0 && evenCounter%5 == 0)//checks if evenCounter is divisible by 3 and 5
        {
            printf("TrumanTiger");
        } 
        else if(evenCounter%3 == 0)//checks if evenCounter is divisible by 3
        {
            printf("Tiger");
        } 
        else if(evenCounter%5 == 0)//checks if evenCounter is divisible by 5
        {
            printf("Truman");
        }
        printf("%d ",evenCounter);
        evenCounter+=2;//adds 2 to evenCounter so goes up at an even number each time
    }
    printf("\n");//makes new line so that it looks nicer after being run
}