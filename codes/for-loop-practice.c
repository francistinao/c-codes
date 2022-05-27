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

// Write a program in C to display the pattern like right angle triangle using an asterisk. Go to the editor

// The pattern like :

// *
// **
// ***
// ****

// #include <stdio.h>

// int main() {
//     int i,j;

//     for(i = 1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

// The pattern like :

// 1
// 12
// 123
// 1234

// #include <stdio.h>

// int main() {
//     for(int i = 1; i<=4; i++){
//         for(int j = 1; j<=i; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

/* Ask for numbers from the user. Display:
- All the inputted numbers
- The number of inputs
- Summation & Average of the inputted numbers.
- Even numbers
- Odd numbers

Stop asking numbers if the input is ZERO
Implement with functions and arrays

Ex: inputs are 2,3,5,7,5 and 0 -> Input: 2,3,5,7,5
                                  Count: 5
                                  Sum: 22
                                  Average: 4,4
                                  Even: 2
                                  Odd: 3,5,7,5 */

#include <stdio.h>

int num_of_arr(int *num,int count) {
    int i; 
    for(i = 0; i < count; i++) {
        printf("%d ",num[i]);
    }
}

int sum_of_arr(int *num,int count) {
    int sum = 0,i;
    for(i = 0; i < count; i++){
        sum = sum + num[i];
    }
    return sum;
}

int ave_of_arr(int sum,int count) {
    float ave;
    ave = sum / count;
    return ave;
}

int condition_of_arr(int *num,int count){
    int i;
    
    printf("Even: ");
    for(i = 0; i < count; i++) {
        if(num[i]%2==0)
            printf("%d ",num[i]);
    }
    printf("\nOdd: ");
    for(i = 0; i < count; i++) {
        if(num[i]%2==1) 
            printf("%d ",num[i]);
    }
}

int main() {
    int num[10],count,sum;
    int i;
    float ave;
    
    printf("Enter the size of the array: ");
    scanf("%d",&count);
    
    for(i = 0; i < count; i++) {
        printf("Enter number: ");
        scanf("%d",&num[i]);
    }
    
    printf("Inputs: ");
    num_of_arr(num,count);
    printf("\n");
    printf("Count: %d\n",count);
    sum = sum_of_arr(num,count);
    printf("Sum: %d\n",sum);
    ave = ave_of_arr(sum,count);
    printf("Average: %.2f",ave);
    printf("\n");
    condition_of_arr(num,count);
}

/* Make a program that the user inputs a string and prints out the 
string, number of vowels, and the vowels */


#include <stdio.h>
#include <string.h>

int main() {
  char word_str[100];
  int i = 0,numOfVowels = 0;

  printf("Enter a string: ");
  gets(word_str);
  printf("String is: ");
  puts(word_str);

  printf("Vowels in the string:");
   for(i = 0; i < strlen(word_str); i++){
          if(word_str[i] == 'a' || word_str[i] == 'e' || word_str[i] == 'i' || word_str[i] == 'o' || word_str[i] == 'u' || word_str[i] == 'A' || word_str[i] == 'E' || word_str[i] == 'I' || word_str[i] == 'O' || word_str[i] == 'U') {
              printf(" %c",word_str[i]);
              numOfVowels += 1;
          }
   }   
   printf("\nNumber of vowels in the string: %d",numOfVowels);
}
