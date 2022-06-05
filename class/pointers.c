/* Binary to decimal conversion using
array of bits */

// #include <stdio.h>
// #include <string.h>

// int bin_to_dec(char *binary) {
//     const int bin = 0;
//     int i = strlen(binary) - 1, 
//     total_dec_val = 0, 
//     binary_value = 1;

//     while(i >= 0) {
//         switch(binary[i]) {
//             case '1':
//                total_dec_val+=pow(2,bin);
//                break;

//             case '0': 
//                break;
//         }
//         bin+=1;
//         i-=1;
//     }
    
//     return total_dec_val;
// }

// int main() {
//     int converted;
//     char binary[8];

//     printf("Input binary num: ");
//     scanf("%s",binary);

//     printf("The decimal result is: %d",converted = bin_to_dec(binary));
// }

/* Another way to convert binary to decimal value */

// #include <stdio.h>
// #include <math.h>

// int bin_input();
// int bin_to_dec_conversion(int *bin_point);

// int main() {
//     int *bin_point,result;

//     // bin_input(&bin_point);
//     bin_to_dec_conversion(bin_point);
//     // printf("The decimal Result is %d",result);
// }

// int bin_input(int *bin_point) {
//     int binary_value;

//     printf("Input binary no: ");
//     scanf("%d",&binary_value); 

//     bin_point = &binary_value;
// }

// int bin_to_dec_conversion(int *bin_point) {
//     int bit,i,decimal_value = 0;

//     for(i = 0; bin_point > 0; i++) {  
//         bit = bin_point % 10;
//         decimal_value += bit * pow(2,i);
//         bin_point/=10;
//     }
//     return decimal_value;
// }

// #include <stdio.h>
// #include <math.h>

// int bin_to_dec_conversion(int *bin_point) {
//     int i, bit = 0, decimal_value = 0;

//     for(i = 0; *bin_point > 0; i++) {
//         bit = *bin_point % 10;
//         decimal_value += bit * pow(2,i);
//         *bin_point /= 10;
//     }
//     return decimal_value;
// }

// int user_bin_input(int binary_value, int *bin_point) {
//     printf("Input binary no. : ");
//     scanf("%d",&binary_value);

//     bin_point = &binary_value;
// }

// int main() {
//     int binary_value, *bin_point, result;
//     user_bin_input(binary_value,bin_point);

//     result = bin_to_dec_conversion(bin_point);
//     printf("The decimal is: %d",result);
// }

/* Write a program in C to show the basic declaration of pointer. Go to the editor
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50 

*/

#include <stdio.h>

int main() {
    int m = 10;
    int n,o;

    int *z;
    z = &m;
    printf("z stores the address of m: %d",z);
    printf("\n*z stores the value of m: %d",*z);
    printf("\n&m is the address of m: %d",&m);
    printf("\n&n stores the address of n: %d",&n);
    printf("\n&o stores the address of o: %d",&o);
    printf("\n&z stores the address of z: %d",&z);
}

/* Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
 */

#include <stdio.h>

int main() {
    int static m = 29;
    int *ab;


    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n", m);
   
    ab = &m; //Now ab is assigned with the address of m
    printf("Address of pointer ab : %p\n",&ab);
    printf("Content of pointer ab : %d\n",*ab);

    m = 34;// The value of m assigned to 34 now
    printf("Address of pointer ab: %p\n",&ab);
    printf("Content of pointer ab: %d\n",*ab);

    m = 7;
    ab = &m; //Now ab is assigned with the address of m
    printf("Address of m: %p\n",ab);
    printf("Value of m: %d\n",*ab);
}

/* Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. Go to the editor
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z    

*/

#include <stdio.h>

int main() {

    int m = 300;
    double fx = 300.600006,*fxP;
    char cht = 'z';
    int *mP, *chtP;
    
    printf("Pointer : Demonstrate the use of & and * operator: \n");
    printf("-----------------------------\n");

    printf("Using & operator: \n");
    printf("Addres of m = %p\n",&m);
    printf("Addres of fx = %p\n",&fx);
    printf("Addres of cht = %p\n",&cht);

    //Pointer variables
    mP = &m;
    fxP = &fx;
    chtP = &cht;
    
    printf("\nUsing & and * operator : \n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n",*mP);
    printf("value at address of fx = %lf\n",*fxP);
    printf("value at address of cht = %c\n",*chtP);

    printf("\nUsing only pointer variable: \n");
    printf("-----------------------------\n");
    printf("address of m: %p\n",mP);
    printf("address of fx: %p\n",fxP);
    printf("address of cht: %p\n",chtP);

    printf("\nUsing only pointer operator: \n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n",*mP);
    printf("value at address of fx = %lf\n",*fxP);
    printf("value at address of cht = %c",*chtP);
}

/* Write a program in C to add two numbers using pointers. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11  
*/

#include <stdio.h>

int sum(int *xP, int *yP);
int main() {
    int x,y,*xP,*yP;

    printf("Input the first number: ");
    scanf("%d",&x);

    printf("Input the second number: ");
    scanf("%d",&y);

    xP = &x;
    yP = &y;
    
    int result = sum(xP,yP);
    printf("The sum of the entered numbers is : %d",result);
}

int sum(int *xP,int *yP) {
    int a, b;
    a = *xP;
    b = *yP;
    
    return (a+b);
}