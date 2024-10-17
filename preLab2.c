#include<stdio.h>

int main(void)
{
    int A;
    int B;
    int C;
    int D;
    printf("Enter 4 integers (A,B,C,D) seperated by spaces: ");
    scanf("%d %d %d %d",&A,&B,&C,&D);
    printf("\n*** Initial Values ***\nA=%d\nB=%d\nC=%d\nD=%d\n",A,B,C,D);
    printf("\n*** Calculated Values ***\n");
    printf("The sum of B and C = %d\n",B+C);
    printf("The product of A and D = %d\n",A*D);
    printf("The integer quotient of A divided by C = %d\n",A/C);
    printf("The remainder quotient of C divided by D = %d\n",C%D);
    printf("The product of A and C divided by the quantity sum of B and D = %d\n",(A*C)/(B+D));
}