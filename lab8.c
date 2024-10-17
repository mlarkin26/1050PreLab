/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 8
* By Michael Larkin (mjlktk)
* October 11th, 2024
*****************************************************************************/
#include <stdio.h>
#define ROWS 5
#define COLS 5

void displayGrid(char grid[ROWS][COLS], int reveal);
int checkHit(char grid[ROWS][COLS], int row, int col);
void updateGrid(char grid[ROWS][COLS], int row, int col,int hit);
int allShipsSunk(char grid[ROWS][COLS]);

int main(void)
{
    char grid[ROWS][COLS] = { {'S', '~', '~', 'S', '~'},//makes a 5 by 5 grid containing S's for ships and ~ for water
                              {'S', '~', '~', 'S', '~'},
                              {'~', '~', '~', '~', '~'},
                              {'~', 'S', 'S', 'S', '~'},
                              {'~', '~', '~', '~', '~'}
                            };
    printf("Welcome to sink the Alien Ship!\nInitial Grid:\n");                      
    displayGrid(grid,0);//prints out the grid so that it shows only the hits, misses, and water
    while(!(allShipsSunk(grid)))// goes until allShipsSunk returns 1
    {
        int row = 0;
        int col = 0;
        printf("Enter your guess (row and column): ");
        scanf("%d %d",&row,&col);// gets user input for which rows and cols they want
        if(checkHit(grid, row, col))// the if and else print hit if checkHit returns 1 and miss if checkHit returns 0
        {
            printf("Hit!\n");
        } else
        {
            printf("Miss!\n");
        }
        updateGrid(grid, row, col, checkHit(grid, row, col));//updates the grid to show wether the the user input was a hit or a miss with X or O
        printf("Current Grid:\n");
        displayGrid(grid,0);//displays the updated grid
    }
    printf("Congratulations! You've sunk all the alien ships!\n");
}

void displayGrid(char grid[ROWS][COLS], int reveal)/* prints the 5 by 5 grid. If reveal = 0, only shows the hits, misses, and water.
                                                      If reveal = 1, shows same stuff plus the ships*/
{
    if(reveal == 0){
     
        for(int i = 0; i < ROWS;i++)
        {
            for(int j = 0; j< COLS; j++)
            {
                if(grid[i][j] == 'S')//if there is an S, prints out water instead
                {
                    printf("~ ");
                } else {
                    printf("%c ", grid[i][j]);
                }
            }
            printf("\n");//makes a new line for every row
        }
    }else{
        for(int i = 0; i < ROWS;i++)
        {
            for(int j = 0; j< COLS; j++)
            {
                printf("%c ",grid[i][j]);//prints out the contents of grid without hiding anything
            }
            printf("\n");
        }
    }   
}

int checkHit(char grid[ROWS][COLS], int row, int col)//check if user inputed a cordinate that is where a ship is
{
    if(grid[row][col] == 'S' || grid[row][col] == 'X' )/*checks if the inputed point is a ship. Also checks if the point has already 
                                                         been marked as a hit so that the user cant change a hit to a miss by inputing the point twice*/
    {
        return 1;
    } else
    {
        return 0;
    }
}

void updateGrid(char grid[ROWS][COLS], int row, int col,int hit)/*updates grid at the point the user inputted with an X if it was where a ship 
                                                                  was or an O if there wasnt a ship there*/
{
    if(hit)
    {
        grid[row][col] = 'X';
    } else
    {
        grid[row][col] = 'O';
    }
}
int allShipsSunk(char grid[ROWS][COLS])// checks to see if there are any ships left
{
    for(int i = 0; i < ROWS;i++)// the for loops go through grid to see if there is an S. If there is, it returns 0. If there isnt, returns 1
    {
        for(int j = 0; j < COLS; j++)
        {
            if(grid[i][j] == 'S')
            {
                return 0;
            }
        }
    }
    return 1;
}
