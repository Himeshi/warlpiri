/*Header file for performing Warlpiri arithmetic*/
#include <stdio.h>
#include <printf.h>

/*prototypes*/
void initialize_warlpiri();
static int printf_arginfo_U(const struct printf_info *info, size_t n, int *argtypes);
static int printf_output_U(FILE *stream, const struct printf_info *info, const void *const *args);

/*constants*/

/*functions*/
void initialize_warlpiri()
{
    register_printf_function ('U', printf_output_U, printf_arginfo_U);
}

static int printf_arginfo_U(const struct printf_info *info, size_t n, int *argtypes)
{
	if (n > 0) 
		argtypes[0] = PA_POINTER;

	return 1;
}

static int printf_output_U(FILE *stream, const struct printf_info *info, const void *const *args) 
{
    printf("UNUM");
	return 1;
}