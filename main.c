/*Sample program to test warlpiri.h*/
#include <stdio.h>
#include "warlpiri.h"

int main()
{
    //initialize warlpiri functions
    initialize_warlpiri();

    //creating a warlpiri unum
    char x[WARLPIRI_X_LENGTH];
    printf("Enter warlpiri unum: ");
    scanf("%s", x);
    warlpiri_u u = x2u(x);

    //printing a warlpiri unum
    printf("Your warlpiri unum is:  %U\n", u);

    return 0;
}