#include <stdio.h>

void modifyCharacter(char *pCh);
void printDiamond(int size, char *pStartChar);

int main(void)
{
    int inputNum;
    char inputChar;
    printf("Enter the size of the diamond: ");
    scanf("%d",&inputNum);
    printf("Enter the starting character: ");
    scanf(" %c",&inputChar);
    char *pChar = &inputChar;
    printDiamond(inputNum,pChar);
}

void modifyCharacter(char *pCh)
{
    *pCh = *pCh +1;
}
void printDiamond(int size, char *pStartChar)
{
    const int nSize = 2 * size - 1;
    char array[nSize][nSize];

    for(int i = 0; i < nSize;i++)
    {
         for(int j = 0; j < nSize;j++)
         {
            array[i][j] = ' ';
         }
    }
    int mid = nSize/2;
    //Top of Diamond
    for(int i = 0; i < nSize/2+1;i++)
    {
        for(int j = 0; j <= i; j++)
        {
            array[i][mid] = *pStartChar;
            array[i][mid-j] = *pStartChar;
            array[i][mid+j] = *pStartChar;
            
        }
    }
    //Bottom of Diamond
    
    int num = 0;
    for(int i = nSize-1; i > nSize/2; i--)
    {
        
        for(int j = 0; j <= num; j++)
        {
            array[i][mid] = *pStartChar;
            array[i][mid-j] = *pStartChar;
            array[i][mid+j] = *pStartChar;
            
        }
        num++;
    }
    //modifications
    int top = 1;
    int bottom = nSize-2;
    while(top<=bottom)
    {
        modifyCharacter(pStartChar);
        for(int j = 0; j < nSize; j++)
        {
            if(array[top][j]!=' ')
            {
                array[top][j] = *pStartChar;
                array[bottom][j] = *pStartChar;
            }
            
        }
        top++;
        bottom--;
    }
    //print    
    for(int i = 0; i < nSize;i++)
    {
         for(int j = 0; j < nSize; j++)
         {
            printf("%c",array[i][j]);
         }
         printf("\n");
    }
    
}
