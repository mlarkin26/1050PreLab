#include <stdio.h>
#include <math.h>

double myExp(int n);
long fact(int n);

int main(void)
{
    for(int i =1; i<=5;i++ )
    {
        printf("e to the %d power = %.3lf\n",i,myExp(i));
    }
}

double myExp(int n)
{
    double e = 1.0;
    for(int i = 1; i <= 10;i++)
    {
        e+=1.0/fact(i);
    }
    return pow(e,n);
}

long fact(int n)
{
    long result = 1;
    for(int i=n;i>1;i--)
    {
        result*=i;
    }
    return result;
}