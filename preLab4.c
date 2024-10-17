#include <stdio.h>

int main(void)
{
    //challenge 1
    int seqNum = 1;
    for(int i = 0; i < 10;i++)
    {
        printf("%d\n",seqNum);
        seqNum*=3;
    }
    //challenge 2
    int counter = 0;
    int riddleNum = 0;
    char riddleAns;
    do {
        int riddle1 = 0;
        int riddle2 = 0;
        int riddle3 = 0;
        printf("Choose a riddle (1,2,or 3): ");
        scanf(" %d",&riddleNum);
        switch (riddleNum)
        {
            case 1:
                counter++;
                riddle1++;
                printf("Riddle: What has keys but can't open locks?\n(a) A Piano\n(b) A Map\n(c) A Computer\n\nEnter your answer (a, b, or c): ");
                scanf(" %c",&riddleAns);
                break;
            case 2:
                counter++;
                riddle2++;
                printf("Riddle: What can travel around the world while staying in a corner\n(a) A Stamp\n(b) A Letter\n(c) An Envelope\n\nEnter your answer (a, b, or c): ");
                scanf(" %c",&riddleAns);
                break;
            case 3: 
                counter++;
                riddle3++;
                printf("Riddle: I am a color you can eat\n(a) Red\n(b) Orange\n(c) Yellow\n\nEnter your answer (a, b, or c): ");
                scanf(" %c",&riddleAns);
                break;
            default:
                printf("Invalid Input");
                break;
        }
        if((riddle1 == 1 && riddleAns == 'c') || (riddle2 == 1 && riddleAns == 'b') || (riddle3 == 1 && riddleAns == 'a'))
        {
            printf("Correct! The door unlocks.\n");
            break;
        } else{
            printf("Incorrect! Try again.\n");
        }

    } while(counter<3);
    //challenge 3
    int givenNum=0;
    printf("Enter the given number: ");
    scanf("%d",&givenNum);
    givenNum = givenNum%2 == 0 ? givenNum+50:givenNum-25;
    printf("The final code is: %d\n",givenNum);
}