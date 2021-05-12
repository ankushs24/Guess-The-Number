#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number , guess , number_of_guesses = 1;
    srand(time(0));
    number = rand()%100 + 1; // Generates the number btw 1 and 100
    
    // printf("The number is %d\n", number);

    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number btw 1 and 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower number please!!!\n");
        }
        else if (guess<number)
        {
            printf("Higher number please!!!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", number_of_guesses);
        }
        number_of_guesses ++;
        
        
        
    } while (guess!=number);
    
    
    return 0;
}