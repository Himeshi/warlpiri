/*Sample program to test warlpiri.h*/
#include <stdio.h>
#include "warlpiri.h"

int main()
{
	char oper;
	char* ans;
	char warlpiriNum1[11];
	char warlpiriNum2[11];
	int x=1;

	while(x)
	{
		//get the first number
		printf("Enter the first warlpiri unum/ubound: ");
		scanf("%s", warlpiriNum1);

		//get the second number
		printf("Enter the second warlpiri unum/ubound: ");
		scanf("%s", warlpiriNum2);

		//get the operation
		printf("Enter the operation you wish to perform from {+,-,*,/,^} (^ for power): ");
		scanf(" %c", &oper);

		switch(oper) {
		case '+':
			ans = warlpiri_add(warlpiriNum1, warlpiriNum2);
			break;
		case '-':
			printf("Sorry, operator not supported yet!\n\n");
			break;
		case '*':
			printf("Sorry, operator not supported yet!\n\n");
			break;
		case '/':
			printf("Sorry, operator not supported yet!\n\n");
			break;
		case '^':
			printf("Sorry, operator not supported yet!\n\n");
			break;
		default:
			printf("Error! operator is not correct\n\n");
			break;
		}
	}

	return 0;
}