#include <stdio.h>
#include "to_uppercase.h"
#include "higher.h"

int main()
{
    int option = 0;
    char test_char;
    while (option != -1)
    {
        printf("Select your option: \n");
        printf("1 - To uppercase \n");
        printf("2 - Higher number \n");
        scanf("%d", &option);
        if (option == 1)
        {
            scanf("%c", &test_char); //Debugging the scanner (actually registers only a line break)
            printf("Type a letter: \n");
            scanf("%c", &test_char);
            printf("The uppercase version of the typed character is: %c\n", to_uppercase(test_char));
        }
        if (option == 2)
        {
            int number[5];
            int next_num = 0;
            for (int i = 0; i < 5; i++)
            {
                printf("Type a number: ");
                scanf("%d", &next_num);
                number[i] = next_num;
            }
            printf("Higher number of the ones typed: %d\n", higher(number));
        }
    }
    return 0;
}