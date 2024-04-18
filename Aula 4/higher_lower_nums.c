#include <stdio.h>

int main(){
    printf("Number: ");
    int n = 0;
    scanf("%d", &n);
    int higher = n;
    int lower = n;
    for (int i = 1; i < 10; i++)
    {
        printf("Number: ");
        scanf("%d", &n);
        if(n > higher){
            higher = n;
        }
        else if (n < lower)
        {
            lower = n;
        }
    }
    printf("==================");
    printf("Lower: %d \n", lower);
    printf("Higher: %d \n", higher);
}