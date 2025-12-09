#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length, i;

    char charset[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOP"
        "0123456789"
        "&*$%#@;:";

    int charsetSize = sizeof(charset) - 1;

    printf("Enter your password length: ");
    scanf("%d", &length);

    if (length <= 0){
        printf("Invalid length. \n");
        return 1;
    }

    srand(time(NULL));

    printf("Generated Password: ");
    for (i = 0; i < length; i++) {
        int randomIndex = rand() % charsetSize;
        printf("%c", charset[randomIndex]);
    }

    printf("\n");
    return 0;

}
