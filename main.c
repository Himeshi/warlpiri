/*Sample program to test warlpiri.h*/
#include <stdio.h>
#include "warlpiri.h"

int main()
{
	initialize_warlpiri();
    
    printf("%U\n",5);
    warlpiri_scan("%U");

	return 0;
}