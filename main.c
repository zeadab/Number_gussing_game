#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(NULL));
    int guess;
    int tries=0;
    int min =1;
    int max=100;
    int answer= (rand()% (max - min + 1))+min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do
    {
        printf("\nGuess a number between 1 and 100:\n");
        scanf("%d",&guess);
        tries++;
        if(guess>answer)
        {
            printf("\nNumber is higher than answer\n");
        }else if(guess<answer)
        {
            printf("\nNumber is lower than answer\n");
        }
        printf(" You tried %d \n",tries);
    }while (guess!=answer);
    printf("\nYou won! with %d tries\n",tries);

}