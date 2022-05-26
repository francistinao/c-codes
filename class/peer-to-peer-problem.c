/*Write a program to add 2 numbers by maximizing functions, loops, and pointers

1.mag insert og number then from that number ... 

2.papilion ang user either addan or minusan ang current number then display the output(output will be the current number)

3.repeat step 2 until user says he/she doesnt want to operate anymore...
*/

#include <stdio.h>

int solution(int x, int y) {
    int *xP, *yP,result,count = 0,choice;
    char ar_op; //arithmetic operator

    xP = &x; //xP will be filled with the address of x
    yP = &y; //yP will be filled with the address of y

    repeat: //goto will be executed unless if the condition in line 101 satisfies to return boolean value true otherwise return false
    printf("Enter operator: ");
    scanf(" %c", &ar_op);
    switch(ar_op) {
         case '+':
             result = *xP + *yP;
             printf("The sum is %d",result);
             break;

         case '-':
             result = *xP - *yP;
             printf("The difference is %d",result);
             break;
     }

    while(count!=1){
        printf("\nWould you like to operate again? \n 1.Yes\n 2.No\n\nChoice: ");
        scanf("%d",&choice);

        if(choice==1)
            goto repeat;
        else
            printf("Thank you, Good bye!"); break;
    }
}

int main(){
    int x,y,i = 0;

    printf("Enter first number: ");
    scanf("%d",&x);

    printf("Enter second number: ");
    scanf("%d",&y);

    solution(x,y);

    return 0;
}