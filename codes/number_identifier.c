/*C program that identifies if the number is an odd or even. The number is 
between 1-5000*/

#include <stdio.h>

int main() {
    //using for loop is the best method if theres an limit between objects
    //for loop will cover all the value between the length of the numbers
    for(int number = 0; number < 5000; number++){
        printf("Enter a number: ");
        scanf("%d",&number);

        if (number%2==0){                       /*the best logical operator in the conditional statement is modulu (%). If the value of the number divided by 2 and its remainderis 0, therefore, it is EVEN, otherwise it is ODD*/
            printf("%d is an EVEN number",number);       
            break; //after printing, break is added so that the loop will stop
        } else {
            printf("%d is an ODD number",number);
            break;
        }
    }

    return 0;
}