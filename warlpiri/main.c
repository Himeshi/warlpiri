/*Sample program to test warlpiri.h*/
#include <stdio.h>
#include "warlpiri.h"

int main()
{
	char oper;
	char warlpiriNum1[8];
	char warlpiriNum2[8];
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
		printf("\n");

		switch(oper) {
		case '+':
			warlpiri_add();
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