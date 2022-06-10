/* Recursion 

Definition of Recursion 
  - Recursion is the technique of making a function call itself. 
    This technique provides a way to break complicated problems down 
    into simple problems which are easier to solve. 
  - Is a process in which a function calls itself directly or indirecty

  Example:

  int fun()
  {
      ...
      fun();
  }

    Another example:

    int fun(int n) {
        (n == 1) ? return 1 : return + fun(n - 1);
    }

    int main() {
        int n = 3;
        printf("%d",fun(n));
        return 0;
    }

    Why recursion?
        - Bridges the gap between elegance and complexity
        - Reduces the need for complex loops and auxiliary data structures
        - Can reduce time complexity easily with memoization 
        - Works really well with recursive structures like trees and graphs

    Why not recursion?
        - Slowness due to CPU overhead
        - Can lead to out of memory errors / stack overflow exceptions
        - Can be unnecissarily complex if poorly constructed

*/

//Create a program that will get all the sum the inputted number using recursion function

#include <stdio.h>

int fact(int num);

int main() {
    int num, result;
    printf("Enter number for factorial: ");
    scanf("%d",&num);

    printf("The factorial of %d is %d",num,fact(num));
}

int fact(num) {
    if(num > 0) {
        return num + fact(num - 1); 
    } else {
        return 0;
    }
}

/* Write a program in C to print first 50 natural numbers using recursion. Go to the editor
Expected Output:

 The natural numbers are : 1  2  3
  4  5  6  7  8  9  10  11  12  13
  14  15  16  17  18  19  20  21  
22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  
39  40  41  42  43  44  45  46  47
  48  49  50 
*/

#include <stdio.h>

int nums(int init) {
    if(init <= 50) {
        printf(" %d",init);
        nums(init + 1);
    }
}

int main() {
    int init = 1;
    nums(init);
}

/*
 Write a program in C to print the array elements using recursion. Go to the editor
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array are : 2  4  6  8  10  12 
*/ 
#include <stdio.h>

int recursion(int size,int* nums,int n) {
    if(n < size) {
        printf(" %d",nums[n]);
        recursion(size,nums,n + 1);
    }
}

int main() {
    int size,nums[100],n = 0;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&size);

    printf("Input %d elements in the array: \n",size);
    for(int i = 0; i < size; i++) {
        printf("element - %d: ",i);
        scanf("%d",&nums[i]);
    }

    printf("The elements in the array are: ");
    recursion(size,nums,n);
}

/* Write a program in C to count the digits of a given number using recursion. Go to the editor
Test Data :
Input a number : 50
Expected Output :

The number of digits in the number is :  2
*/

#include <stdio.h>
#include <string.h>

int rec(int *num, int n) {
    if(n < strlen(num)) {
        return rec(num,n + 1);
    }
    printf("%d",n);
}

int main() {
    char num[10];
    int n = 0;

    printf("Enter number: ");
    scanf("%s",num);

    printf("The number of digits is: ");
    rec(num,n);
}
