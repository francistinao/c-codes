/* Write a C program on conveting mile
into kilometers*/

#include <stdio.h>

#define KMS_PER_MILE 1.609

int main(){
  double miles,kms;
 
  printf("Enter miles: ");
  scanf("%lf21",&miles);

  kms = KMS_PER_MILE * miles;

  printf("%lf",kms);

  return 0;
}



/*
Write a C program to compute the sum of the
two given integer values. If the two values
are the same, then return triple their sum.
Expected Output:

3
12 */

#include <stdio.h>

int main() {
int num1,num2,sum;

printf("Enter first number: ");
scanf("%d",&num1);

printf("Enter second number: ");
scanf("%d",&num2);

sum = num1 + num2;

    if(num1==num2) {
        printf("%d",num1);
        printf("\n%d",sum * 3);
    } else {
        printf("%d",sum);
    }

}

/* Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Expected Output:

1
1
*/

#include <stdio.h>

int main() {
    int num1,num2,sum;
    int true = 1;
    sum = num1 + num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    do {
       if (num1==30 || num2==30 || sum==30) {
           return true;
         } else {
           return 0;
        }
        while (!(num1,num2,sum));
     }

//Write a program in C to display the first 10 natural numbers.

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i<=10; i++){
        printf("\n%d",i);
     }
     
     return 0;
 }

//Write a C program to find the sum of first 10 natural numbers

 #include  <stdio.h>

 int main() {

   int sum = 0;

   printf("The first 10 number is :\n");

   for (int i = 1; i<=10; i++){
       printf("\n%d",i);
        sum+=i;
    }
     printf("\n%d",sum);

    return 0;
}

/* Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28 */

#include <stdio.h>

#define TEST_DATA 7

int main() {     
    int sum = 0;

    printf("The first 7 natural number is: ");

    for(int i = 1 ; i<=TEST_DATA; i++){
        printf("\n%d",i);
        sum+=i;
   }
     printf("\nThe Sum of the Natural Numbers up to 7 terms is: %d",sum);

     return 0;
 }

/* Write a program in C to read 10 numbers from keyboard and find their sum and average. 

Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

#include <stdio.h>

int main() {
   int num; 
   int sum = 0;
   float ave;

   printf("Enter number: ");
   scanf("%d",&num);

     for(int i = 1; i<=num; i++){
         sum+=i;
     }
     printf("\nThe sum of %d no is : %d",num,sum);
     ave = sum * .10;
     printf("\nThe Average is %f",ave);

     return 0;
 }

/* Write a program in C to display the cube of the number upto given an integer. */

 #include <stdio.h>
 #include <math.h>

 int main() {
    int num;
    int cube;

     printf("Input number of terms: ");
     scanf("%d",num);

     for (int i = 1; i<=num; i++) {
       cube = pow(i,3);
       printf("\nNumber is: %d and cube of the %d is: %d",num,num,cube);
     } 

     return 0;
 }

/* Write a program in C to display the multiplication table of a given integer. 
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15 */

// #include <stdio.h>

 int main() {
    
   int num;
     /*Since the program dictates the user to input
    the number, we need to use scanf*/

   printf("Enter a number: ");
   scanf("%d",num);

    //Now we will be using the for-loop repition control structure

     for(int i = 1;i<=10; i++){
         int product;
        product = num * i;
         printf("\n%d X %d = %d",num,i,product);
    }

     return 0;
    
 }

/* Write a program in C to display the pattern like right angle triangle using an asterisk

The pattern like :

*
**
***
****

*/

#include <stdio.h>

int main (){

   for (int i = 1; i<=4; i++){
        for(int j = 0; j<i; j++){
           printf("*");
         }
        printf("\n");
      }
    return 0;
}

/* Write a program in C to display the pattern like right angle triangle with a number. 

The pattern like :

1
12
123
1234
*/ 

#include <stdio.h>

int main() {

      for (int i = 1; i<=4; i++){
         for (int j=1; j <= i; j++) { 
            printf("%d",j);
       }
        printf("\n");   
     }
    return 0;
}
