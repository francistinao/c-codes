/* Write a C program on conveting mile
into kilometers*/

// #include <stdio.h>

// #define KMS_PER_MILE 1.609

// int main(){
//     double miles,kms;

//     printf("Enter miles: ");
//     scanf("%lf21",&miles);

//     kms = KMS_PER_MILE * miles;

//     printf("%lf",kms);

//     return 0;
// }



/* 
Write a C program to compute the sum of the 
two given integer values. If the two values 
are the same, then return triple their sum.
Expected Output:

3
12 */

// #include <stdio.h>

// int main() {
//     int num1,num2,sum;

//     printf("Enter first number: "); 
//     scanf("%d",&num1); 

//     printf("Enter second number: "); 
//     scanf("%d",&num2);  

//     sum = num1 + num2;

//     if(num1==num2) {
//         printf("%d",num1);
//         printf("\n%d",sum * 3);
//     } else {
//         printf("%d",sum);
//     }

//     return 0;
// }

/* Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30. 
Expected Output:

1
1
*/

// #include <stdio.h>

// int main() {
//     int num1,num2,sum;
//     int true = 1;
//     sum = num1 + num2;

//     printf("Enter first number: ");
//     scanf("%d",&num1);

//     printf("Enter second number: ");
//     scanf("%d",&num2);

//     do {
//          if (num1==30 || num2==30 || sum==30) {
//             return true;
//          } else {
//           return 0;
//         } 
//         while (!(num1,num2,sum));
//     }

