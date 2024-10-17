#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SEQUENCES 5
#define SEQUENCE_LENGTH 10
#define RELATIONSHIP_THRESHOLD 70

void initializeSequences(char array[][SEQUENCE_LENGTH]);
void displaySequences(char array[][SEQUENCE_LENGTH]);
int calculateSimilarity(char array[NUM_SEQUENCES][SEQUENCE_LENGTH], int row1, int row2);
void mutateSequence(char array[NUM_SEQUENCES][SEQUENCE_LENGTH],int seq, int numMut);

int main(void)
{
    srand(time(NULL));
    char genSeq[NUM_SEQUENCES][SEQUENCE_LENGTH];
    for(int i = 0; i < NUM_SEQUENCES;i++)
    {
        for(int j = 0; j < SEQUENCE_LENGTH;j++)
        {
            genSeq[i][j] = 'A';
        }
    }
    printf("Initial Genetic Sequences:\n");
    initializeSequences(genSeq);
    displaySequences(genSeq);
    int choice = -1;
    while(1)
    {
        printf("Choose an operation:\n1. Calculate Similarity\n2. Mutate Sequence\n3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            int row1;
            int row2;
            printf("Enter the indices of the two sequences to compare (0 to 4): ");
            scanf("%d %d",&row1,&row2);
            int percentage = calculateSimilarity(genSeq,row1,row2);
            printf("Similarity between sequence %d and %d: %d%%\n",row1,row2,percentage);
            if(percentage > RELATIONSHIP_THRESHOLD)
            {
                printf("The individuals are related.\n");
            } else
            {
                printf("The individuals are not related.\n");
            }
        } else if(choice == 2)
        {
            int index = -1;
            int num = -1;
            printf("Enter the index of the sequence to mutate (0 to 4): ");
            scanf("%d",&index);
            printf("Enter the number of mutations to perform: ");
            scanf("%d",&num);
            mutateSequence(genSeq,index,num);
            printf("Sequence %d after mutation:\n",index);
            displaySequences(genSeq);
        }else
        {
        break;
        }
    }
}

void initializeSequences(char array[][SEQUENCE_LENGTH])
{
    for(int i = 0; i < NUM_SEQUENCES;i++)
    {
        for(int j = 0; j < SEQUENCE_LENGTH;j++)
        {
            int randNum = rand() %4;
            if(randNum == 0)
            {
                array[i][j] = 'A';
            } else if (randNum == 1)
            {
                array[i][j] = 'T';
            } else if (randNum == 2)
            {
                array[i][j] = 'C';
            } else 
            {
                array[i][j] = 'G';
            }
            
        }
    }
}

void displaySequences(char array[][SEQUENCE_LENGTH])
{
    for(int i = 0; i < NUM_SEQUENCES;i++)
    {
        for(int j = 0; j < SEQUENCE_LENGTH;j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

int calculateSimilarity(char array[NUM_SEQUENCES][SEQUENCE_LENGTH],int row1, int row2)
{
    int counter = 0;

    for(int i = 0; i < SEQUENCE_LENGTH; i++)
    {
        if(array[row1][i] == array[row2][i])
        {
            counter++;
        }
    }
    int similarity = (((float)counter)/SEQUENCE_LENGTH)*100;
    return similarity;
}

void mutateSequence(char array[NUM_SEQUENCES][SEQUENCE_LENGTH],int seq, int numMut)
{
    for(int i = 0; i < numMut; i++)
    {
        int randNum = rand() %4;
            if(randNum == 0)
            {
                array[seq][i] = 'A';
            } else if (randNum == 1)
            {
                array[seq][i] = 'T';
            } else if (randNum == 2)
            {
                array[seq][i] = 'C';
            } else 
            {
                array[seq][i] = 'G';
            }
    }
}


