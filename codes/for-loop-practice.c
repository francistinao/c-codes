/* Practice website: https://www.w3resource.com/c-programming-exercises/for-loop/index.php */

/* Write a program in C to display
the first 10 natural numbers*/

// #include <stdio.h>

// int main() {
//     int i;
//     for(i=1;i<=10; i++){
//         printf("\n%d",i);
//     }
//     return 0;                               
// }                                                                                                          
// /* Write a C program to find the sum of 
// first 10 natural numbers*/

// #include <stdio.h>

// int main() {
//     int i, sum = 0;

//     for(i=1;i<=10;i++){
//         sum+=i;
//     }
//     printf("%d",sum);

//     return 0;
// }

/* Write a program in C to display n terms of natural number and their sum*/

// #include <stdio.h>

// int main(){
//     int num,i,sum = 0;

//     printf("Enter a number: ");
//     scanf("%d",&num);

//     printf("The first %d natural number is: ",num);

//     for(i = 1;i<=num; i++) {

//         printf("\n%d",i);
//         sum += i;
//     }
//     printf("\nThe sum of Natural Number up to %d terms: %d",num,sum);

//     return 0;

// }

/* Write a program in C to read 10 numbers from keyboard and find their sum and average */

// #include <stdio.h>

// int main() {
//     int i,sum,average;

//     for (i = 1;i<=10;i++) {
//         sum += i;
//     }

//     printf("The sum of 10 no is: %d",sum);

//     average = sum / 10;
//     long double converted_ave = (int)average;

//     printf("\nThe Average is %lf",converted_ave);

//     return 0;
// }

/* Write a program in C to display the cube of the number up to given an integer */

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num,cube;

//     printf("Enter number: ");
//     scanf("%d",&num);

//     for(int i = 1; i<=num; i++){
//         cube = pow(i,3);
//        printf("\nNumber is: %d and cube of the %d is %d",i,i,cube);
//     }
    

//     return 0;
// }

/* Write a C program in C to display the multiplication ble of a given integer*/

// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d",&num);
    
//     for(int i = 1; i<=10; i++){
//         int product = num * i;
//         printf("\n%d X %d = %d",num,i,product);
//     }

//     return 0;
// }

/* Write a program in C to display the multiplication table vertically from 1 to n*/

// #include <stdio.h>

// int main() {
//     int i,j;

//     for(i = 1; i<=10; i++){
//         for(j = 1; j <=10; j++){
//             printf("%d X %d = %d",i,j,i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

