#include <stdio.h>
#include <string.h>

int bin_to_dec(char *binary) {
    const int bin_base = 2; 
    int i = strlen(binary) - 1, 
    total_dec_val = 0, 
    index_value = 1;
    
    while(i >= 0) {
        switch(binary[i]) {
            case '1':
               total_dec_val+=index_value;
               break;

            case '0': 
               break;
        }
        index_value *= bin_base;
        i-=1;
    }
    return total_dec_val;
}

int main() {
    int converted;
    char binary[8];

    printf("Input binary num: ");
    scanf("%s",binary);

    printf("The decimal result is: %d",converted = bin_to_dec(binary));
}