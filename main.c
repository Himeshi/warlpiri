/*Sample program to test warlpiri.h*/
#include <stdio.h>
#include "warlpiri.h"

int main()
{
    warlpiri_u i = 10;

    initialize_warlpiri();

    printf("tes %U\n", i);

    return 0;
}