/* Binary to decimal conversion using
array of bits */

#include <stdio.h>
#include <string.h>

int numGetter(char *inp);
int convert(char *inp);

int main() {
    char inp[100],binary_number[100],result;    

    numGetter(inp);
    
    strcpy(binary_number, inp);
    
    printf("The binary nubmer is %s",binary_number);
    printf("\nThe decimal is : %d",result = convert(inp));
}

int numGetter(char *inp) {
    printf("Enter a binary number: ");
    scanf("%s",inp);
}

int convert(char *inp) {
    int decimal_num = 0, i = strlen(inp) - 1, base = 1;

    while(i >= 0) {
        if(inp[i] == '1') { 
            decimal_num += base; 
        }
        base*=2;
        i--;
    }
    return decimal_num;
}

/* Another way to convert binary to decimal value */

#include <stdio.h>
#include <math.h>

int bin_to_dec_conversion(int binary_value) {
    int bit,i,decimal_value = 0;

    // switch(binary_value!=0) {
    //     case 1:
    //         while(binary_value) {
    //             digit = binary_value % 10; //Since in converting binary to decimal is we have to evaluate from the last bit to the first bit so the order is descending right? In order for us to extract only the last digit is we have to divide our binary to 10 and get only its remainder, no matter how many times we'll divide our current binary to 10, it will always return to its original bit using the remainder
    //             decimal_value += digit*pow(2,i); // or decimal_value += digit << i;
    //             binary_value/=10; /* After the first bit, we'll have to remove it from the binary since it now holds its actual value to decimal, we have to divide our binary to 10 so that it will remove the last bit

    //             10101 / 10 = 1010 rem 1
    //             1010 /10 = 101 
    //             101/10 = 10
    //             10/10 = 0;
    //             */
               
    //             i+=1; 
    //         }
    //         break;
    //     case 0: 
    //         break;
    // }

    for(i = 0; binary_value!=0; i++) {
        bit = binary_value % 10;
        decimal_value += bit*pow(2,i);
        binary_value/=10;
    }
    
    return decimal_value;
}

int main() {
    int binary_value,result;

    printf("Input binary no: ");
    scanf("%d",&binary_value); 

    result = bin_to_dec_conversion(binary_value);
    printf("The decimal Result is %d",result);
}
