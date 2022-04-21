/* A number guessing game 
logic by Francis Tin-ao */ 
#include <stdio.h>

int main(){
    int lucky_number = 5,guesses = 3,guess;

    while(guess!=lucky_number) //Since we haven't guessed yet the lucky nubmer 
        {
        printf("\nEnter your guess: ");
        scanf("%d",&guess);
        printf("Guess left: %d\n",guesses);
        
        if(guesses!=0){ //Since var guess is still 3 and not equal to 0
        //the user can prompt
            if (guess!=lucky_number){  //Nested if else 
                printf("Try again");
                guesses--;  //decrements the value of guesses to satisfy the parent else condition
            } else {
                printf("Congratulations. You won!");
            } 
        } else { //Is guess equal to 0? 
            printf("You have no more guesses left. You lose :(");
            break; //Terminates the loop if the value of guessues satisfy the condition
        }
    }
    return 0;
}
