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

#include <stdio.h>
#include <math.h>

int bin_to_dec_conversion(int *bin_point) {
    int i, bit = 0, decimal_value = 0;

    for(i = 0; *bin_point > 0; i++) {
        bit = *bin_point % 10;
        decimal_value += bit * pow(2,i);
        *bin_point /= 10;
    }
    return decimal_value;
}

int user_bin_input(int binary_value, int *bin_point) {
    printf("Input binary no. : ");
    scanf("%d",&binary_value);

    bin_point = &binary_value;
}

int main() {
    int binary_value, *bin_point, result;
    user_bin_input(binary_value,bin_point);

    result = bin_to_dec_conversion(bin_point);
    printf("The decimal is: %d",result);
}