#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int sum = 0;
    printf("Type the first number: ");
    scanf("%d", &num1);
    printf("Type the second number: ");
    scanf("%d", &num2);
    printf("Type the third number: ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    printf("The sum of the typed numbers is: %d\n", sum);
    return 0;
}
