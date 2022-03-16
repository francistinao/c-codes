/* A C++ program that identifies if the user's alphabet input is
a vowel or a consonant using switch statement*/

#include <stdio.h>

using namespace std;

int main(){
    char input; //the users inputted letter
    char isAlphabet; //value of the users input

    printf("Enter a letter: ");
    scanf("%c",&input);

    //declares all the values of the alphabet datatype 
    isAlphabet = ( input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
    
    if(isAlphabet){
        printf("%c is a VOWEL",isAlphabet);
    } else {
        printf("%c is a CONSONANT",isAlphabet);
    }

    return 0;
}   