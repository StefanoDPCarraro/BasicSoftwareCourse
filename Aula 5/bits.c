#include <stdio.h>

int main(){
    int value = 2;
    printf("Value at the start = %d \n", value);
    value = value << 2;
    printf("Value after 2 shifts left = %d \n", value);
    value = value >> 2;
    printf("Value reset (Shifting right two bits) = %d \n", value);
    return 0;
}