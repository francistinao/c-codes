/* A number guessing game 
logic by Francis Tin-ao */ 
#include <stdio.h>

int main(){
    int lucky_number = 70,guesses = 2,guess;
    
    printf("Try to guess the lucky number!");
    while(guess!=lucky_number) //Since we haven't guessed yet the lucky nubmer 
        {
        printf("\nEnter your guess: ");
        scanf("%d",&guess);
        printf("Guess left: %d\n",guesses);
        
        if(guesses!=0){ //Since guess is still 3 and not equal to 0
        //the user can prompt
            if (guess != lucky_number){
                if(guess < lucky_number){
                    printf("\nYour guess is less than the lucky number"); //Prompts the user that the inputted guess is less than the lucky number
                } else {
                    printf("\nYour guess is greater than the lucky number"); //Prompts the user that the inputted guess is greater than the lucky number
                }
                printf("\nTry again");
                guesses--; //Decrements the guesses
               
            } else {
                printf("Congratulations. You won!");
            } 
        } else if (guess == lucky_number && guesses == 0){ 
            printf("What a clutch! Congratulations"); 
            break;
        } else {
            printf("You have no more guesses left. You lose :(");
            break; //Terminates the loop if the value of guessues satisfy the condition
        }
    } 
    return 0;
}
