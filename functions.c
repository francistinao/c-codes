
// #include <stdio.h>

// int pyramid_of_asterisk(int x, int y) {
//     for(int i = 0; i < x; i++) {
//         for(int j = y; j > i; j--) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int value_of_x_and_y(int x, int y) {
//     printf("Enter number for X Axis: ");
//     scanf("%d",&x);

//     printf("Enter number for Y Axis: ");
//     scanf("%d",&y);

//     pyramid_of_asterisk(x,y);
// }

// int main() {
//     int x,y;
//     value_of_x_and_y(x,y);
// }

/* Parameters 

2 types of parameters : 
    Actual parameters = The parameters passed to the function or what you call the arguments
        example: conversion(x,y);

    Formal parameters = The parameters receive by a function
        example: 
                int conversion(int a, int b) {
                    return a + b;
                }

Call by value
    def: Here, values of actual parameters will be copied to formal
    parameters and these two different parameters store values in 
    different locations

    Example: 
        int x = 10, y = 20;
        fun(x,y);

        int fun(int x, int y) {
            x = 20;
            y = 10;
        }

        it will return x = 10, and y = 20
        why? Simply because in your actual parameters 
        is that you're just calling the value to pass it
        inside a formal parameters inside the function
        and not its variable

Call by reference:
    def: Here, both actual and formal parameters refers to 
    some memory location. Therefore, any changes made to the formal
    parameters will get reflected to actual parameters

    * = dereference operator
    & = adressof/reference operator

*/