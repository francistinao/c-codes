/* A C++ program that identifies if the user's alphabet input is
a vowel or a consonant using switch statement

By Francis Tin-ao*/

#include <stdio.h>

using namespace std;

int main(){
    //Algorithm updated: another way to execuse this program by using do-while loop
    
    char alphabet;

    printf("Enter a alhapbet: ");
    scanf("%c",&alphabet);
              //Thus if alphabet is false, it will proceed on the do statement to execute the following code
        do {
            if (alphabet == 'a'||alphabet == 'e'||alphabet == 'i'|| alphabet =='o'|| alphabet == 'u' ||
                alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
                    printf("%c is a VOWEL",alphabet);
                } else {
                    printf("%c is a CONSONANT");
                } 
             } while (!alphabet); //Since the user must input a raw alphabet thefefore the initialization of the variable alphabet is False

    return 0;
}   
