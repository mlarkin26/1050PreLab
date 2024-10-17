/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 2
* By Michael Larkin (mjlktk)
* August 30, 2024
*****************************************************************************/
#include<stdio.h>

int main(void)
{
    int firstInteger;//first input variable
    int secondInteger;//second input variable
    printf("Please input an integer: ");
    scanf("%d",&firstInteger);//gets input and assigns to firstInteger
    printf("Please input another integer: ");
    scanf("%d",&secondInteger);//gets input and assigns to secondInteger
    printf("Your first integer was %d and your second was %d",firstInteger,secondInteger);
    printf("\nMultiplying them = %d",firstInteger*secondInteger);//multiplys firstInteger by secondInteger
    printf("\nDividing the first by the second = %d",firstInteger/secondInteger);//divides firstInteger by secondInteger
    printf("\nThe crazy equation value = %d",(secondInteger-2)*firstInteger);//subtracts secondInteger by 2 then multiplies by firstInteger
    printf("\nYour first integer was %d and your second was %d\n",firstInteger,secondInteger);
}