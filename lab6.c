/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 6
* By Michael Larkin (mjlktk)
* September 27th, 2024
*****************************************************************************/
#include <stdio.h>

int main(void)
{
    int evens[50]={0};//creates an array of 50 elements to hold the even numbers
    int odds[50]={0};//creates an arrau of 50 elements to hold the odd numbers
    int evenTotal = 0;
    float evenAverage = 0;
    int oddTotal = 0;
    float oddAverage = 0;
    for(int i = 0;i<50;i++)//loop for assigning even numbers 102-200 to the even array and odd numbers 201-299 to the odd array
    {
        evens[i]+= (102 +(2*i));
        odds[i]+= (201 +(2*i));
    }
    printf("Evens:\n");
    for(int i = 0;i<50;i++)/*loop adds all the elements of the even array for the evenTotal and caculates the average using the evenTotal 
    and eventually the total number of elements*/
    {
        evenTotal+= evens[i];
        evenAverage = evenTotal/(float)(i+1);
        printf("evens[%d] = %d, ",i,evens[i]);
    }
    printf("\nTotal: %d, Average: %.2f\nOdds:\n", evenTotal, evenAverage);//prints total and average of even array
    for(int i = 0; i<50;i++)/*loop adds all the elements of the odd array for the oddTotal and caculates the average using the oddTotal 
    and eventually the total number of elements*/
    {
        oddTotal+= odds[i];
        oddAverage = oddTotal/(float)(i+1);
        printf("odds[%d] = %d, ",i,odds[i]);
    }
    printf("\nTotal: %d, Average: %.2f\nProducts:\n", oddTotal, oddAverage);//prints total and average of odd array
    for(int eI = 0, oI = 49; eI<50;eI++,oI--)//loops up the even array starting at index 0 and down the odd array starting at index 49 and calculates and prints the product
    {
        printf("evens[%d]*odds[%d] = %d, ",eI,oI,evens[eI]*odds[oI]);
    }
    printf("\n");// to make it look nicer
}