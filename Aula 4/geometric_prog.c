#include <stdio.h>

int main(){
    int n, prod;
    printf("Type a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= 5; i++){
        prod = n * i;
        printf("Index %d: %d\n", i, prod);
    }
    return 0;
}