// /* Conditional Statements Programming Practice */

// /*  Write a C program to accept two integers 
// and check whether they are equal or not. */

 #include <stdio.h>

 int main () {
     int num1,num2;

     printf("Enter a num: ");
     scanf("%d",&num1);

     printf("Enter second num: ");
     scanf("%d",&num2);

     //If else statement
     if (num1 == num2) {
         printf("Number1 and Number2 are equal");
     } else {
         printf("Num1 and Num2 are not equal");
     }
 }

// /* Write a C program to check wheter a given
// number is even or odd */

 #include <stdio.h>

 int main() {
     int num1;

     printf("Enter a number: ");
     scanf("%d",&num1);


     if(num1%2==0){
         printf("%d is an even integer");
     } else {
         printf("%d is an odd integer");
     }

     return 0;
 }

// /* Write a C program to check whether a given
// number is positive or negative */

// #include <stdio.h>

 int main() {
     int num;

     printf("Enter a number: ");
     scanf("%d",&num);
    
     //Conditional statement
     if(num<=0){
         printf("%d is a negative integer",num);
     } else {
         printf("%d is a positive integer",num);
     } 

//     return 0;
// }

/*
Write a C program to find the largest of the
three numbers*/

//Since the program needed 3 input numbers 
//we will declare 3 variables with its
//acceptable identifiers

#include <stdio.h>

int main() {
    int num1,num2,num3; //so as you can see here
    // I declare 3 variables

    printf("Enter first number: ");
    scanf("%d",&num1);
    
    printf("Enter second number: ");
    scanf("%d",&num2);
    
    printf("Enter third number: ");
    scanf("%d",&num3);

    //since we all have these three numbers
    //now we have to build the logic
    //to identify which of the three numbers
    //is the largest

    printf("1st Number = %d",num1);
    printf("\n2nd Number = %d",num2);
    printf("\n3rd Number = %d",num3);

    if (num1 > num2 && num1 > num3){
        printf("\nThe 1st Number is the greatest among the three");
    } else if (num2 > num1 && num2 > num3){
        printf("\nThe 2nd number is the greatest among the three");
    } else if (num3 > num1 && num3 > num2){
        printf("\nThe 3rd number is the greatest among the three");
    } else {
        return 0;
    }

}
  
/* Write a C program to read the age of a candidate
and determine whether it is eligable for casting 
her/his own vote*/

#include <stdio.h>

int main(){
    int age;

    printf("Enter age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("Contratulations! You are eligible for casting your vote");
    } else {
        printf("You are not yet eligible for casting your vote");
    }
    return 0;
}

/* Write a C program to read any day number in integer and display day name in the word*/

#include <stdio.h>

int main() {
    int day;

    printf("Enter day: ");
    scanf("%d",&day);

    if(day > 7){
        printf("You have entered an invalid day!");
    } else {
        switch(day) {
             case 1:
                printf("Monday");
                break;

            case 2:
                printf("Tuesday");
                break;
            
            case 3:
                printf("Wednesday");
                break;
            
            case 4:
                printf("Thursday");
                break;
            case 5:
                printf("Friday");
                break;
            
            case 6: 
                printf("Saturday");
                break;
            
            case 7: 
                printf("Sunday");
                break;
        }
    }
    return 0;
}
