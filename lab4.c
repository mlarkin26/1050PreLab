/*****************************************************************************
* CMP_SC 1050
* FS 2024
* Lab 4
* By Michael Larkin (mjlktk)
* September 13th, 2024
*****************************************************************************/
#include<stdio.h>

int main(void)
{
    //Chapter 1: The Code of Loops
    int frag1 = 0;
    for(int i = 1; i <= 100;i++)
    {
        if(i%2==0 && i%5!=0)//checks if number is even and not divisible by 5 and adds it to frag 2
        {
            frag1+=i;
        }
    }
    printf("Mystic Code Fragment 1: %d\n\n",frag1);
    //Chapter 2: The Riddle of the Switch
    int count = 3;
    int frag2 = 0;
    while(count>0 && frag2!=42)//goes through loop as long as user hasnt used all attempts and hasnt gotten the correct answer making frag2 42
    {
        frag2 = 0;
        int numAns = 0;
        char charAns = 'z';
        printf("The Riddle of the Switch:\n\nChoose a number between 1 and 5 to hear a riddle:\n");
        scanf("%d",&numAns);
        switch(numAns)//uses input for number, gives riddle, takes in answer, if correct makes frag2 42, if wrong makes frag2 0
        {
            case 1:
                printf("Riddle: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind.\n(a) Echo (b) Shadow (c) Whisper\nEnter your answer (a, b, c):\n");
                scanf(" %c",&charAns);
                charAns == 'a' ? (frag2 = 42): (frag2 = 0);
                break;
            case 2:
                printf("I'm light as a feather, yet the strongest man can't hold me for much longer.\n(a) Air (b) Breath (c) Feather\nEnter your answer (a, b, c):\n");
                scanf(" %c",&charAns);
                charAns == 'b' ? (frag2 = 42): (frag2 = 0);
                break;
            case 3:
                printf("I have keys but no locks. I have space but no room. You can enter, but you can't go outside.\n(a) Book (b) Door (c) Keyboard\nEnter your answer (a, b, c):\n");
                scanf(" %c",&charAns);
                charAns == 'c' ? (frag2 = 42): (frag2 = 0);
                break;
            case 4:
                printf("What can fill a room but takes up no space?\n(a) Air (b) Light (c) Sound\nEnter your answer (a, b, c):\n");
                scanf(" %c",&charAns);
                charAns == 'b' ? (frag2 = 42): (frag2 = 0);
                break;
            case 5:
                printf("The more you take, the more you leave behind.\n(a) Footsteps (b) Memories (c) Time\nEnter your answer (a, b, c):\n");
                scanf(" %c",&charAns);
                charAns == 'a' ? (frag2 = 42): (frag2 = 0);
                break;   
            default://in case they enter something other than 1,2,3,4,5
                printf("Invaild choice. Please try again\n");
                break;
        }
        if(frag2 == 42)//sees if they got it right or wrong
        {
            printf("Correct! You've Earned Mystical Code Fragment 2.\nMystical Code Fragment 2: %d\n",frag2);
        } else
        {
            printf("Incorrect! You have %d attempts left.\n",count-1);
        }
        count--;
    }
    if(frag2 == 0){//in case they use all atempts
        printf("Sorry, you've used all your attempts!\nMystic Code Fragment 2: %d\n",frag2);
    }
    //Chapter 3
    int mysticCode = frag1 + frag2;//sum of fragment 1 and fragment 2
    printf("The final Mystic Code is: %d\n",mysticCode);
    printf(mysticCode == 2042 ? "The Kingdom of Code is saved!\n":"The Kingdom of Code is doomed!\n");//prints saved if mystic code is 2042 otherwise prints doomed
}