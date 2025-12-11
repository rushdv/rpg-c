#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;
    int length, i;

    char charset[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "&*$%#@/-+";

    int charsetSize = sizeof(charset) - 1;

    srand(time(NULL));

    while (1)
    { // for infinite loop
        printf("\n\n\n========== RANDOM PASSWORD GENERATOR =========== \n");
        printf("1. Generate Password \n");
        printf("2. Exit \n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter your password length: ");
            scanf("%d", &length);

            if (length <= 0)
            {
                printf("Invalid length. \n");
                return 1;
            }

            printf("Generated Password: ");

            for (i = 0; i < length; i++)
            {
                int randomIndex = rand() % charsetSize;
                printf("%c", charset[randomIndex]);
            }
        } else if (choice == 2) {
            printf("Exiting program....\n");
            break;
        } else {
            printf("Invalid Choice! Try Again....\n");
        }
    }
    return 0;
}
