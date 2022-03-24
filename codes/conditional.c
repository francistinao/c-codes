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
  
/* Write a program in C to calculate nd print the Electricty bill of a given costumer. The costumer id, name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the costumer. The charge are as follow */

#include <stdio.h>

int main() {
    char userId[4];
    char name[10];
    float formula,bill;

    printf("Enter Costumer ID: ");
    scanf("%s",&userId[4]);

    printf("Enter Costumer Name: ");
    scanf("%s",&name[10]);

    printf("Enter electricity consumed: ");
    scanf("%d",&bill);

    printf("\nCostumer ID NO: %s",userId[4]);
    printf("\nCostumer Name: %s",name[10]);
    printf("\nUnit Consumed: %d",bill);
    
    if(bill<200){
        formula = bill * 1.20;
        printf("\nAmount Charges @Rs. 1.20 per unit: %f",formula);
    } else if (bill>=200 && bill<400){
        formula = bill * 1.50;
        printf("\nAmount Charges @Rs. 1.50 pero unit: %f",formula);
    } else if (bill >= 400 && bill < 600){
        formula = bill * 1.80;
        printf("\nAmount Charges @Rs. 1.80 per unit: %f",formula);
    } else {
        formula = bill * 2.00;
        printf("\nAmount Charges @Rs. 2.00 per unit: 1600.00");
    }


    float surchage = bill * 0.15;
    printf("\nSurchage Amount: %f",surchage);

    if(bill>400) {
        surchage += formula;
        printf("\nNet Amount Paid By the Costumer: %f",surchage);
    }

    return 0;
}
