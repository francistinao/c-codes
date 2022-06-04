/* String Manipulations In C Programming Using Library Functions

In this article, you'll learn to manipulate strings in C using library functions such as gets(), 
puts, strlen() and more. You'll learn to get string from the user and perform operations on the string.

You need to often manipulate strings according to the need of a problem. Most, if not all, of the time string manipulation can be done manually but, this makes programming complex and large.

To solve this, C supports a large number of string handling functions in the standard library "string.h".

Few commonly used string handling functions are discussed below:

Function	Work of Function
strlen()	computes string's length
strcpy()	copies a string to another
strcat()	concatenates(joins) two strings
strcmp()	compares two strings
strlwr()	converts string to lowercase
strupr()	converts string to uppercase
Strings handling functions are defined under "string.h" header file.

Note: You have to include the code below to run string handling functions.

gets() and puts()
Functions gets() and puts() are two string functions to take string
 input from the user and display it respectively as mentioned in the previous chapter.

--------------------------------------------------------------------------------------

String manipulation basically refers to the process of handling and analyzing strings. It involves various operations concerned with modification and parsing of strings to use and change its data. R offers a series of in-built functions to manipulate the contents of a string. In this article, we will study different functions concerned with the manipulation of strings in R.

Concatenation of Strings
String Concatenation is the technique of combining two strings. String Concatenation can be done using many ways:

paste() function
Any number of strings can be concatenated together using the paste() function to form a larger string. This function takes separator as argument which is used between the individual string elements and another argument ‘collapse’ which reflects if we wish to print the strings together as a single larger string. By default, the value of collapse is NULL.

Syntax:
    str <- paste("Learn","Code");
    printf(str); 

*/


//Program that reverse a string
#include <stdio.h>
#include <string.h>


int main() {
    char word[32] = "";
    char rev[32] = "";
    int length = 0;
    int index = 0;

    printf("\nPlease enter a string to reverse: ");
    scanf("%s",word);

    length = strlen(word);

    for(index = 0; index < length; index++){
        rev[length - 1 - index] = word[index];
    }
    printf("\nThe reversed string is : %s",rev);
    
    return 0;
}