#include <stdio.h>
#define ROWS 12
#define COLS 3

void Print2DArray(int array[][COLS], int rows);//This function should print all of the elements of the passed-in array in tabular form.
void PrintRowAverage(int array[][COLS], int whichrow);//This function should calculate the average for every element in the given row, and print this average.
void PrintColAverage(int array[][COLS], int whichcol);//This function should calculate the average for every element in the given column, and print this average.

int main(void)
{
    int classScore[][COLS] = {{72,68,62},{95,88,95},{93,97,86},{98,77,98},{99,92,90},{47,32,27},{97,99,85},{85,95,91},{96,91,99},{94,90,85},{98,98,90},{76,82,98}};
    printf("Heres the matrix:");
    Print2DArray(classScore,ROWS);
    printf("\n\nHere are the row averages:\n");
    for(int i = 0; i < ROWS; i++)
    {
        PrintRowAverage(classScore,i);
    }
    printf("\nHere are the column averages:\n");
    for(int i = 0; i < COLS;i++)
    {
        PrintColAverage(classScore,i);
    }
}

void Print2DArray(int array[][COLS], int rows)
{
    for(int i = 0; i<rows;i++)
    {
        printf("\nROW %d: ",i);
        for(int j = 0; j<COLS;j++)
        {
            printf("%d ",array[i][j]);
        }
    }
}

void PrintRowAverage(int array[][COLS], int whichrow)
{
    int rowTotal = 0;
    for(int i = 0; i < COLS;i++)
    {
        rowTotal+=array[whichrow][i];
    }
    float rowAverage = rowTotal/(float)COLS;
    printf("Average of row %d = %f\n",whichrow,rowAverage);
}

void PrintColAverage(int array[][COLS], int whichcol)
{
    int colTotal = 0;
    for(int i = 0; i < ROWS; i++)
    {
        colTotal += array[i][whichcol];
    }
    float colAverage = colTotal/(float)ROWS;
    printf("Average of col %d = %f\n",whichcol,colAverage);
}


