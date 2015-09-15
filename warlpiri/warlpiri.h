/*Header file for performing Warlpiri arithmetic*/
#include <stdio.h>
#include <string.h>

/*prototypes*/
char *warlpiri_add(char *inputNumber1, char *inputNumber2);
int get_warlpiri_num_index(char *input);

/*constants*/
int const WARLPIRI_NUM_COUNT = 7;
char const WARLPIRI_NUMS[7][5] = {"-inf", "-2", "-1", "0", "1", "2", "inf"};
char const WARLPIRI_NUMS_ADDITION_TABLE[7][7][5] = {"-inf",	"-inf",	"-inf",	"-inf",	"-inf",	"-inf",	"NaN",
													"-inf",	"-inf",	"-inf",	"-2",	"-1",	"0",	"inf",
													"-inf",	"-inf",	"-2",	"-1",	"0",	"1",	"inf",
													"-inf",	"-2",	"-1",	"0",	"1",	"2",	"inf",
													"-inf",	"-1",	"0",	"1",	"2",	"inf",	"inf",
													"-inf",	"0",	"1",	"2",	"inf",	"inf",	"inf",
													"NaN",	"inf",	"inf",	"inf",	"inf",	"inf",	"inf"};

/*functions*/
char *warlpiri_add(char *inputNumber1, char *inputNumber2)
{
	char *input1 = inputNumber1;
	char *input2 = inputNumber2;
	char answer[11];
	int left_row_index = -1, left_column_index = -1, right_row_index = -1, right_column_index = -1;

	//check if numbers are valid

	//if both numbers are unums, simply add
	if((left_row_index = get_warlpiri_num_index(input1)) != -1 && (left_column_index = get_warlpiri_num_index(input2)) != -1)
	{
		printf("Answer is %s\n\n",WARLPIRI_NUMS_ADDITION_TABLE[left_row_index][left_column_index]);
		//answer = WARLPIRI_NUMS_ADDITION_TABLE[left_row_index][left_column_index];
	}

	//if one number is a unum, convert it into a ubound

	//add two ubounds
}

int get_warlpiri_num_index(char *input)
{
	int index = -1, i;

	for (i = 0; i < WARLPIRI_NUM_COUNT; i++)
	{
		if(!strcmp(WARLPIRI_NUMS[i], input))
		{
			index = i;
		}
	}

	return index;
}