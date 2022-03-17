//A simple C guessing game by Francis Tin-ao

#include <stdio.h> 

int main(){ 

    // Confused on the actual algorithm of this program
    // I need help from professionals ^^
    //Pray for me
    
    char guess_color[] = "";
    char lucky_color[] = "red";
    int guess_left = 3; 

        while(guess_color!=lucky_color){
            printf("Keep on guessing");
            scanf("%s",&guess_color);
                if(guess_color==lucky_color){
                    printf("You won!");
                } else {
                    printf("Try again");
                    printf("Enter a color: ");
                    scanf("%s",guess_color);
                }
                 for (int i = 0; i < guess_left; i++){
                    printf("Guess Left: %d",guess_left);
                }
        }

        return 0;
}