/*Header file for performing Warlpiri arithmetic*/
#include <stdio.h>
#include <printf.h>

typedef short warlpiri_u;

/*prototypes*/
int initialize_warlpiri();
void warlpiri_printf_handler(FILE* stream, const struct printf_info* info, const void* const* args);
static int warlpiri_printf_arginfo(const struct printf_info* info, size_t n, int* argtypes, int* size);

/*constants*/

/*functions*/
int initialize_warlpiri()
{
    register_printf_specifier('U', warlpiri_printf_handler, warlpiri_printf_arginfo);
}

void warlpiri_printf_handler(FILE* stream, const struct printf_info* info, const void* const* args)
{
    warlpiri_u warlpiri_arg;

    warlpiri_arg = ((warlpiri_u)(args[0]));
    return fprintf(stream, "Unum"); // replace with Ela's u2x function
}

static int warlpiri_printf_arginfo(const struct printf_info* info, size_t n, int* argtypes, int* size)
{
    if (n > 0)
        argtypes[0] = PA_POINTER;

    return 1;
}