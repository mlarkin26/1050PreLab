/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 5
* By Michael Larkin (mjlktk)
* September 20th, 2024
*****************************************************************************/
#include<stdio.h>
int IsPrime(int n);
int main(void)
{
    for(int i = 1;i<=100;i++)// goes through 1-100
    {
        if(IsPrime(i))//calls IsPrime to check if prime
        {
            printf("%d ",i);
        }
    }
    printf("\n");//new line so it looks better
}
int IsPrime(int n)
{
    int counter = 0;
    for(int i = 1; i<=n;i++)//goes through all the numbers that could be multiplied to get n
    {
        if(n%i==0)//checks to see if the n is actually divisiable by i
        {
            counter++;
        }
    }
    if(counter==2)//a prime number is only divisable by two numbers 
    {
        return 1;
    } else{
        return 0;
    }
}