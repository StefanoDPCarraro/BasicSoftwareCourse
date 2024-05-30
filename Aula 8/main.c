#include <stdio.h>
#include "to_uppercase.h"

int main(){
    char test_char;
    printf("Type a letter: ");
    scanf("%c", &test_char);
    printf("The uppercase version of the typed character is: %c\n", to_uppercase(test_char));
    return 0;
}