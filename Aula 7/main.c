#include <stdio.h>
#include "calc.h"

int main(){
    int n1, n2, add_ret, multip_ret;

    printf("Type the first number: ");
    scanf("%d", &n1);

    printf("Type the second number: ");
    scanf("%d", &n2);

    add_ret = add(n1, n2);
    printf("%d + %d = %d\n", n1, n2, add_ret);

    multip_ret = multip(n1, n2);
    printf("%d x %d = %d", n1, n2, multip_ret);

    return 0;
}