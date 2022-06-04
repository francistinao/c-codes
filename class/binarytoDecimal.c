#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_dec(char *binary_num) { 
    int i = strlen(binary_num) - 1,
    exp = 0, dec_value = 0;

    for (i = 0; i != 0 ; i--) {
        dec_value+= binary_num[i] * pow(2,exp);
        exp+=1;
        break;
    }
    return dec_value;
}

int main() { 
    char binary_num[10],result;

    printf("Input binary num: " );
    scanf("%s", binary_num);

    printf("The decimal is: %d",result = binary_to_dec(binary_num));
}